#include<stdio.h>
// int main()
// {
//     int arr[5];
//     for(int i=0;i<5;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int *p=NULL;
//     p=&arr[0];
//     for(int i=0;i<5;i++)
//     {
//         printf("%d ",*(p+i));
//     }
// }
int main()
{
    int arr[5];
    int *p=NULL;
    p=&arr[0];
    for(int i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",*(p+i));
    }
}