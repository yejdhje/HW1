#include<stdlib.h>
#include<stdio.h>

int main()
{
	float w, h, BMI;
	printf("��J�A������(�^�T)�G");
	scanf("%f",  &h);
	printf("��J�A���魫(�S)�G");
	scanf("%f", &w);
	BMI = (w * 703) / h / h;
	printf("�A��BMI���G%.2f", BMI);
	return 0;
}