#include <stdio.h>
#include <wchar.h>
#include <string.h>
#include <locale.h>

int main(void){
	const char c1[] = "Сбой матрицы";
	const wchar_t c2[] = L"Сбой матрицы";
	setlocale(LC_ALL, "");
	printf("char -> sizeof: %zu bytes, strlen: %zu chars\n", sizeof(c1), strlen(c1));
	printf("wchar -> sizeof %zu bytes, wcslen: %zu chars\n", sizeof(c2), wcslen(c2));
	return 0;
}
