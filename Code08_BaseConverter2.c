#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	printf("16진수 입력 : ");
	scanf("%X", &a);
	printf("10진수 변환 값은 %d입니다.\n", a);
	printf("8진수 변환 값은 %o입니다.\n", a);

	int b;
	printf("8진수 입력 : ");
	scanf("%o", &b);
	printf("10진수 변환 값은 %d입니다.\n", b);
	printf("16진수 변환 값은 %X입니다.\n", b);
}