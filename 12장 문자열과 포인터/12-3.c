#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[80];

	printf("문자열 입력 : "); 
	scanf("%s", str); // 띄어쓰기 포함 문자열을 해본다
	printf("첫 번째 단어 : %s\n", str); // 띄어쓰기 이전까지 받아온다
	scanf("%s", str); // 띄어쓰기를 받아온다
	printf("버퍼에 남아 있는 두 번째 단어 : %s\n", str); // 띄어쓰기 이후 값을 받아온다
}