#include <stdio.h>

int main() {
	double totalMileage; // �@��Ѫ��`���{��
	double fuelCost; // �T�o�@����/�[�ڦh�ֿ�
	double fuelEfficiency; // �����@����/�[�گ��p�h�֤���
	double parkingCost; // �@�Ѫ������O
	double tollCost; // �@�Ѫ��q��O(�L���O)

	// ���ܥΤ��J������T
	printf("�п�J�@��Ѫ��`���{�ơ]�����^�G");
	scanf("%lf", &totalMileage);

	printf("�п�J�T�o�@����/�[�ڦh�ֿ��G");
	scanf("%lf", &fuelCost);

	printf("�п�J�����@����/�[�گ��p�h�֤����G");
	scanf("%lf", &fuelEfficiency);

	printf("�п�J�@�Ѫ������O�G");
	scanf("%lf", &parkingCost);

	printf("�п�J�@�Ѫ��q��O(�L���O)�G");
	scanf("%lf", &tollCost);

	// �p��@�Ѷ}���h�u�@����O
	double fuelConsumption = totalMileage / fuelEfficiency;
	double fuelExpense = fuelConsumption * fuelCost;
	double totalExpense = fuelExpense + parkingCost + tollCost;

	// ��ܭp�⵲�G
	printf("\n�@�Ѷ}���h�u�@����O���p�p�U�G\n");
	printf("�T�o�O�ΡG%.2lf\n", fuelExpense);
	printf("�����O�G%.2lf\n", parkingCost);
	printf("�q��O(�L���O)�G%.2lf\n", tollCost);
	printf("�`��O�G%.2lf\n", totalExpense);

	return 0;
}