#include<stdio.h>
int main()
{
    int number,s;
    scanf("%d",&number);
    s=number%10;
    number = number/10;
    int rightshift = s*100+number;
    printf("%d",rightshift);
}