#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	printf("16진수 첫 번째 수 입력 : ");
	scanf("%X", &a);

	int b;
	printf("16진수 두 번째 수 입력 : ");
	scanf("%X", &b);

	printf("덧셈: %X + %X = %6X\n", a, b, a + b);
	printf("뺄셈: %X - %X = %6X\n", a, b, a - b);
	printf("곱셈: %X * %X = %6X\n", a, b, a * b);
	printf("몫: %X / %X = %6X\n", a, b, a / b);
}