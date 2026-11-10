#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "");
	int total = 0;
	int wch;
	while ((wch = getwchar()) != WEOF && wch != L'#'){
		for (int i = 0; i*i <= wch; i++){
			if (i*i == wch){
				total++;
				break;
			};
		};
	};
	printf("%d\n", total);
	return 0;
}
