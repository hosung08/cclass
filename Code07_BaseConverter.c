#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d / %d = %d ... %d\n",
			a, b, a / b, a % b);
	a = a / b;
	printf("%d / %d = %d ... %d\n",
			a, b, a / b, a % b);
	a = a / b;
	printf("%d / %d = %d ... %d\n",
			a, b, a / b, a % b);
	a = a / b;
	printf("%d / %d = %d ... %d\n",
			a, b, a / b, a % b);
	a = a / b;
	printf("%d / %d = %d ... %d\n",
			a, b, a / b, a % b);
}