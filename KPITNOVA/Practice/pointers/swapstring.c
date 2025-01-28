#include<stdio.h>
void swap(char *str1, char *str2);
int main()
{
    char str1[20],str2[20],temp;
    scanf("%[^\n]s",str1);
    scanf("%c",&temp);
    scanf("%[^\n]s",str2);
    swap(&str1[0],&str2[0]);
    printf("%s\n%s",str1,str2);
}
void swap(char *str1,char *str2)
{
    for(int i=0;str1[i]!='\0';i++)//*(str1+i)!='\0'
    {
        *(str1+i)=*(str2+i)-*(str1+i); //str1[i]=str2[i]-str1[i];
        *(str2+i)=*(str2+i)-*(str1+i);
        *(str1+i)=*(str1+i)+*(str2+i);
    }
}