#include <stdio.h>

int main()
{
	printf("줄바꿈\n줄바꿈\n");
	printf("\t탭키\t탭키\n");
	printf("여기를\r덮어쓴다\n");
	printf("뒤로\b한칸\n");
	printf("\a\a\a소리 3번\n");
	printf("\\\\\\ 백슬래시 3개\n");
	printf("\"\'");
	return 0;
}