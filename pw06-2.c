#include <stdio.h>
#include <locale.h>
#include <wchar.h>
int main(void) {
	setlocale(LC_ALL, "");
	wchar_t ch;
	ch=getwchar();
	int i=0;
	while (ch!= L'#') {
		if (ch>=L'0' && ch<=L'7') {
			i++;
		}
		ch=getwchar();
	}
	printf("Количество:  %d\n",i);
	return 0;
}
