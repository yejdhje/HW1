#include<stdlib.h>
#include<stdio.h>

int main()
{
	int a, b;
	printf("�п�J��ӼƦr�P�_�Ĥ@�ӬO�_���ĤG�Ӫ����ơG");
	scanf("%d %d", &a, &b);
	if (a%b == 0 && a!=0 )
	{
		printf("%d��%d������", a, b);
	}
	else
	{
		printf("%d���O%d������",a,b);
	}

	return 0;
}