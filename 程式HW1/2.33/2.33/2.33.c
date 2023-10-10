#include <stdio.h>

int main() {
	double totalMileage; // 一整天的總里程數
	double fuelCost; // 汽油一公升/加侖多少錢
	double fuelEfficiency; // 平均一公升/加侖能行駛多少公里
	double parkingCost; // 一天的停車費
	double tollCost; // 一天的通行費(過路費)

	// 提示用戶輸入相關資訊
	printf("請輸入一整天的總里程數（公里）：");
	scanf("%lf", &totalMileage);

	printf("請輸入汽油一公升/加侖多少錢：");
	scanf("%lf", &fuelCost);

	printf("請輸入平均一公升/加侖能行駛多少公里：");
	scanf("%lf", &fuelEfficiency);

	printf("請輸入一天的停車費：");
	scanf("%lf", &parkingCost);

	printf("請輸入一天的通行費(過路費)：");
	scanf("%lf", &tollCost);

	// 計算一天開車去工作的花費
	double fuelConsumption = totalMileage / fuelEfficiency;
	double fuelExpense = fuelConsumption * fuelCost;
	double totalExpense = fuelExpense + parkingCost + tollCost;

	// 顯示計算結果
	printf("\n一天開車去工作的花費估計如下：\n");
	printf("汽油費用：%.2lf\n", fuelExpense);
	printf("停車費：%.2lf\n", parkingCost);
	printf("通行費(過路費)：%.2lf\n", tollCost);
	printf("總花費：%.2lf\n", totalExpense);

	return 0;
}