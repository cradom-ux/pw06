#include <stdio.h>
int main(void) {
	int choice=0;
	while (choice !=5) {
		printf("Выберите действие:\n");
		printf("1. Литры -> галлоны\n");
		printf("2. Миллилитры -> унция\n");
		printf("3. Кубические метры -> литры\n");
		printf("4. Кубические сантиментры -> миллилитры\n");
		printf("5. Выход\n");
		if (scanf("%d", &choice)!=1) {
			printf("Ошибка: введите число от 1 до 5\n");
			while (getchar()!='\n');
			continue;
		} 
		switch (choice) {
			case 1:
				double litr;
				double gallon;
				printf("Введите количество литров: \n");
				scanf("%lf",&litr);
				gallon=litr*0.219969;
				printf("Результат: %lf галлонов\n", gallon);
				break;
			case 2:
				double ml;
				double unc;
				printf("Введите количество миллилитров: \n");
				scanf("%lf",&ml);
				unc=ml/29.574;
				printf("Результат: %lf унций\n", unc);
				break;
			case 3:
				double mkub;
				double litrr;
				printf("Введите количество кубических метров: \n");			
				scanf("%lf",&mkub);
				litrr=mkub*1000;
				printf("Результат: %lf литров\n", litrr);
				break;
			case 4:
				double smk;
				double mll;
				printf("Введите количество кубических сантиметров: \n");
				scanf("%lf",&smk);
				mll=smk;
				printf("Результат: %lf \n", mll);
				break;
			case 5:
				printf("Выход из программы\n");
				break;
			default: 
				printf("Ошибка: такого пункта в меню нет\n");
				continue;

		}
	}
		return 0;
}


