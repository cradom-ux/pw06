#include <stdio.h>
int main(void) {
	int sumo=0;
	int sumc=0;
	int n;
	int co=0;
	int cc=0;
	scanf("%d", &n);
	while (n>0) {
		int sumd=0;
		for (int i=1;n>i;i++) {
			if (n%i==0) {
				sumd+=i;
			}
		}
		if  (sumd==n) {
			printf("Совершенное число\n");
			cc++;
			sumc+=n;
		}
		else {
			printf("Несовершенное число\n");
			co++;
			sumo+=n;
		}
		scanf("%d",&n);
	}
	printf("Среднее арифметическое несовершенных: %d\n", sumo/co);
	printf("Среднее арифметическое совершенных: %d\n", sumc/cc);
	return 0;
}
