#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** ps); // ������ ������ �迭�̹Ƿ� ���������ͷ� ����

int main()
{
	char temp[80];
	char* str[21] = { 0 }; // ������ �迭 / NULL ������ �ʱ�ȭ
	int i = 0;

	while (i < 20)
	{
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp); // 1. ���ڿ� �����Լ�  2. ���� ����
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
	while (*ps != NULL) // �ּ� ���̹Ƿ� �ǳ��� null�� �Ǹ� while�� Ż��
	{
		printf("%s\n", *ps);
		ps++;
	}
}