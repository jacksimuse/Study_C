#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	// 입 대 출 소 / 입 소 출 대
	char ch;
	printf("대문자를 입력하세요 : ");
	scanf("%c", &ch);
	while (ch < 65 || ch > 122)
	{
		printf("다시 입력하기~\n");
		printf("대문자를 입력하세요 : ");
		scanf(" %c", &ch);
	}
	printf("소문자로 바꿔드림 ㅎㅎ : %c\n", ch + 32);

	printf("소문자를 입력하세요 : ");
	scanf(" %c", &ch);
	while (ch < 65 || ch > 122)
	{
		printf("다시 입력하기~\n");
		printf("대문자를 입력하세요 : ");
		scanf(" %c", &ch);
	}
	printf("대문자로 바꿔드림 ㅎㅎ : %c\n", ch - 32);
}