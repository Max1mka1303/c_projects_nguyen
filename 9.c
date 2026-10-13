#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <wchar.h>
int main(void){
	setlocale(LC_ALL, "");
	wchar_t ws[100];
	wscanf(L"%ls", ws);
	wprintf(L"Агент %ls авторизован в системе\n", ws);
	return 0;
}
