#include <stdio.h>
int main(void) {
	double all=0;
	double trafic;
	double cost1=0;
	double cost2=0;
	double cost3=0;
	printf("Введите количество ГБ:");
	scanf("%lf", &trafic);
	if (trafic<=100) {
		cost1=trafic*20;
	}
	else if (trafic<=300) {
		cost1=100*20;
		cost2=(trafic-100)*30;
	}
	else {
		cost1=100*40;
		cost2=200*30;
		cost3=(trafic-300)*40;
	}
		all=cost1+cost2+cost3;
		printf("Использовано трафика: %.2lf ГБ\n", trafic);
		printf("Первая ступень: %.2lf руб.\n",cost1);
		printf("Вторая ступень: %.2lf руб.\n",cost2);
		printf("Третья ступень: %.2lf руб.\n",cost3);
		printf("Итоговая стоимость: %.2lf \n", all);
	return 0;
}


