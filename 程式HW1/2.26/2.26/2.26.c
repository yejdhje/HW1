#include<stdlib.h>
#include<stdio.h>

int main()
{
	int a, b;
	printf("請輸入兩個數字判斷第一個是否為第二個的倍數：");
	scanf("%d %d", &a, &b);
	if (a%b == 0 && a!=0 )
	{
		printf("%d為%d的倍數", a, b);
	}
	else
	{
		printf("%d不是%d的倍數",a,b);
	}

	return 0;
}