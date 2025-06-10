#include <stdio.h>

int main()
{
	char a = 'A';
	char b = 'a';
	double c = 56.789012;
	int d = 30;
	printf("%c, %d\n", a, a);
	printf("%c, %c, %c\n", b, b + 5, b + 25);
	printf("%.3lf, %09d", c, d);
}