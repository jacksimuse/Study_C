#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp;
	char str[] = "banana";
	int i;

	fp = fopen("b.txt", "w");
	if (fp == NULL)
	{
		printf("������ ������ ���߽��ϴ�\n");
		return 1;
	}

	i = 0;
	while (str[i] != '\0')
	{
		fputc(str[i], fp);
		i++;
	}
	fputc('\n', fp);
	fclose(fp);

	return 0;
}