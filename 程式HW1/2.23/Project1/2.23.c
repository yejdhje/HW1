#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c;
	int max, min;
	scanf("%d %d %d", &a, &b, &c);
	if (a >= b && a >= c)
	{
		max = a;
		if (b >= c)
		{
			min = c;
		}
		else
		{
			min = b;
		}
	}
	else if (b >= a && b >= c)
	{
		max = b;
		if (a >= c)
		{
			min = c;
		}
		else
		{
			min = a;
		}
	}

	else
	{
		max = c;
		if (a >= b)
		{
			min = b;
		}
		else
		{
			min = a;
		}
	}
	printf("the largest number is %d", max);
	printf("\n");
	printf("the smallest number is %d", min);

	return 0;
}