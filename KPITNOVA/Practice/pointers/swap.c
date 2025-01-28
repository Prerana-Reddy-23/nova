#include<stdio.h>
//int main()
// {
//     int a=2,b=8;
//     int *p=NULL,*q=NULL;
//     p=&a;
//     q=&b;
//     *p=*q-*p;
//     *q=*q-*p;
//     *p=*p+*q;
//     printf("%d,%d",*p,*q);
//}
// void swap(int *p, int *q);
// int main()
// {
//     int a=2,b=8;
    
//     swap(&a,&b);
// }
// void swap(int *p, int *q)
// {
   
//     *p=*q-*p;
//     *q=*q-*p;
//     *p=*p+*q;
//     printf("%d,%d",*p,*q);
// }
void swap(int *p, int *q);
int main()
{
    int a=2,b=8;
    printf("before Swaping %d, %d",a,b);
    swap(&a,&b);
    printf("\nAfter Swaping %d, %d",a,b);
}
void swap(int *p, int *q)
{
   
    *p=*q-*p;
    *q=*q-*p;
    *p=*p+*q;
    
}