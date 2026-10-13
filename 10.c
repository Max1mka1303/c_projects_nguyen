#include <stdio.h>
#include <string.h>
#include <wchar.h>

int main(void){
	wchar_t a[100];
	wchar_t b[100];
	wchar_t c[5];
	wscanf(L"%ls %ls %ls", &a, &b, &c);
	wprintf(L"\"%-15ls|%20ls|%.5ls\"\n", a, b, c);
	return 0;
}
