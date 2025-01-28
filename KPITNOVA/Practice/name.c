#include<stdio.h>
int main()
{
	char user[30];
	scanf("%[^\n]s",user);
	printf("\"Hello, %s\"",user);
	return 0;
}