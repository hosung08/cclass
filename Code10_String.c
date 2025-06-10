#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	// str1 문자열에 "KoreaIT" 대입
	// str2 문자열 8칸
	// str3 문자열 8칸
	char str1[8] = "KoreaIT";
	char str2[8];
	char str3[8];

	strcpy(str2, "KoreaIT");
	strcpy(str3, str2);

	printf("%s %s %s\n", str1, str2, str3);
	//      0 1 2 3 4 5 6 7
	// str4 K o r e a I T !
	char str4[8] = "KoreaIT";
	str4[7] = '!';
	printf("str4 = %s\n", str4);
	str4[7] = '\0';
	printf("str4 = %s\n", str4);
	//      0 1 2 3 4 5 6
	// str5 0 1 2 3 * 5 6
	char str5[11] = "0123456789";
	str5[4] = '\0';
	printf("str5 = %s\n", str5);

	char str6[15] = "Hello World";
	printf("strlen = %d\n", strlen(str6));

	// str6의 띄어쓰기 위치를 null 문자로 바꾸고
	// 길이 출력해보기
	str6[5] = '\0';
	printf("strlen = %llu\n", strlen(str6));
	printf("str6 = %s\n", str6);

	char str7[10] = "KoreaIT";
	printf("strlen = %llu\n", strlen(str7));
	printf("sizeof = %llu\n", sizeof(str7));

	printf("sizeof(char) = %llu\n", sizeof(char));
}