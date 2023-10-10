#include<stdlib.h>
#include<stdio.h>

int main()
{
	int a;
	printf("Please enter a number¡G");
	scanf("%d", &a);
	if (a % 2 == 1)
	{
		printf("%d is odd",a);
	}
	else
	{
		printf("%d is even", a);
	}
	return 0;
}