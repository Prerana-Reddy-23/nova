#include<stdio.h>
void copy(int *p,int *q);
int main()
{
    int a[5],b[5];
    int *p=NULL,*q=NULL;
    p=&a[0];
    q=&b[0];
    for(int i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }
    copy(&a[0],&b[0]);
    for(int i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }
}
void copy(int *p,int *q)
{
    for(int i=0;i<5;i++)
    {
        *(q+i)=*(p+i);
    }
    
}