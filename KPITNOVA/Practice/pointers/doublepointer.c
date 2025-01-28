#include<stdio.h>
int main()
{
    int p=8;
    int *q=NULL;
    q=&p;
    int **r=NULL;
    r=&q;
    printf("%d\n",**r);
    printf("%p",*r);
}