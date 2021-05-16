#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("사전에 나중에 나오는 과일 이름 : ");
	if (strcmp(str1, str2) > 0) // strcmp(비교대상 1, 비교대상 2) 1이 2보다 나중에 나오면 /아스키코드 값으로 비교하기 때문
		printf("%s\n", str1);	// 비교1 출력
	else
		printf("%s\n", str2);   // 비교2 출력

	printf("앞에서 3개의 문자만 비교하면?\n");
	if (strcmp(str1, str2, 3) == 0) // strcmp(비교대상 1, 비교대상 2, 숫자) 1과 2가 같으면 0반환 
		printf("같다\n");	// 비교1 출력
	else
		printf("다르다\n"); // 비교2 출력

	return 0;
}