#include<stdio.h>
int main()
{
    int number,digit,add_digit=0;
    scanf("%d%d",&number,&digit);
    add_digit=number*10+digit;
    printf("%d",add_digit);
}