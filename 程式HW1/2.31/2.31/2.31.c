#include<stdlib.h>
#include<stdio.h>

int main()
{
	int a[11];
	int i=0;
	int j = 0;
	for (i = 0; i < 11; i++)
	{
		a[i] = i;
	}
	printf("number\tsquare\tcube\n");

	for (j = 0; j < 11; j++)
	{
		printf("%d\t%d\t%d\n", *a+j,(*a + j)*(*a + j),(*a + j)*(*a + j)*(*a + j));
	}
	
	return 0;
}