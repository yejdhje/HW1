#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
	for (int i = 0; i <= 8; i++)
	{
		for (int j = 0; j <= 8; j++)
		{
			if (i == 0 || j == 0 || i == 8 || j == 8)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i <= 8; i++)
	{
		for (int j = 0; j <= 8; j++)
		{
			if (i + j == 4 || i - j == 4 || i - j == -4 || i + j == 12)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i <= 8; i++)
	{
		for (int j = 0; j <= 8; j++)
		{
			if (j == 4 || (i == 1 || i == 2) && (j == 3 || j == 5) || i == 2 && (j == 2 || j == 6))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i <= 8; i++)
	{
		for (int j = 0; j <= 8; j++)
		{
			if ((i == 0 || i == 8) && (j == 3 || j == 4 || j == 5) || (i == 1 || i == 7) && (j == 1 || j == 7) || ((i == 2 || i == 3 || i == 4 || i == 5 || i == 6) && (j == 0 || j == 8)))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}