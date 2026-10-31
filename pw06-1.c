#include <stdio.h>
#include <ctype.h>
int main(void) { 
	int i=0;
	char ch;
	ch=getchar();
	while (ch!= '#') {
		if (ch%3==0) {
			i++;
		}
		ch=getchar();
	}
	printf("Количество:  %d\n", i);
	return 0;
}
