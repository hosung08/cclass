#include <stdio.h>

int main()
{
	int a = 10;
	printf("int: %d\n", a);
	unsigned int b = 4000000000;
	printf("uint: %u\n", b);
	long long c = 10000000000;
	printf("long long: %lld\n", c);
	unsigned long long d = 20000000000;
	printf("ull: %llu\n", d);

	int e = 31;
	printf("16진수: %x %X\n", e, e);
	printf("8진수: %o\n", e);
	printf("메모리: %p\n", &e);

	float f = 3.5;
	printf("float: %f\n", f);
	double g = 2.71;
	printf("double: %lf\n", g);
	double h = 0.000037;
	printf("지수형태: %e %E\n", h, h);

	char i = 'A';
	printf("문자: %c %d\n", i, i);
	char j[] = "Hello World";
	printf("문자열: %s\n", j);

	// 50%
	int percent = 50;
	printf("%d%%", percent);
}