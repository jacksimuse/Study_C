#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[80] = "straw";

	strcat(str, "berry"); // strcat(�ձ���, "�ޱ���") �̾���̱�
	printf("% s\n", str);
	strncat(str, "piece", 3); // strncat(�ձ���, "�ޱ���", �ޱ����� �) �� ���̰ڴٴ� ���ε�
	printf("%s\n", str);

	return 0;
}