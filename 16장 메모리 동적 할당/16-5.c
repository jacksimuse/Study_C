#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** ps); // 본문에 포인터 배열이므로 이중포인터로 받음

int main()
{
	char temp[80];
	char* str[21] = { 0 }; // 포인터 배열 / NULL 값으로 초기화
	int i = 0;

	while (i < 20)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp); // 1. 문자열 전용함수  2. 띄어쓰기 가능
		if (strcmp(temp, "end") == 0) break;
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
		i++;
	}
	print_str(str);

	for (i = 0; str[i] != NULL; i++)
	{
		free(str[i]);
	}

	return 0;
}

void print_str(char** ps)
{
	while (*ps != NULL) // 주소 값이므로 맨끝에 null이 되면 while문 탈출
	{
		printf("%s\n", *ps);
		ps++;
	}
}