#include<stdio.h>
int main()
{
	int x,rem=0;
	scanf("%d",&x);
	while(x!=0)
	{
		rem=x%10;
		printf("%d",rem);
		return 0;
	}
}