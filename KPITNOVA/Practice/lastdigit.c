#include<stdio.h>
int main()
{
    int number,last_digit,sub;
    scanf("%d",&number);
    last_digit=number%10;
    sub = number-last_digit;
    printf("%d",sub);
    return 0;
    
}