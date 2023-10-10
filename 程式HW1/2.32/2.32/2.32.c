#include<stdlib.h>
#include<stdio.h>

int main()
{
	float w, h, BMI;
	printf("輸入你的身高(英吋)：");
	scanf("%f",  &h);
	printf("輸入你的體重(磅)：");
	scanf("%f", &w);
	BMI = (w * 703) / h / h;
	printf("你的BMI為：%.2f", BMI);
	return 0;
}