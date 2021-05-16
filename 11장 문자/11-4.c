#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch;
	int i;

	for (i = 0; i < 3; i++)
	{
		scanf("%c", &ch); // 개행 공백문자 탭문자도 입력되는거 기억하기
		printf("%c", ch);
	}

	return 0;
}