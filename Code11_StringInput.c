#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	printf("%d\n", strcmp("apple", "apple"));
	printf("%d\n", strcmp("grape", "apple"));
	printf("%d\n", strcmp("apple", "grape"));
	char a[15], b[15];
	printf("문자열 입력 : ");
	scanf("%s", a);
	printf("a = [%s]\n", a);
	scanf("%s", b);
	printf("b = [%s]\n", b);
}