#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[20] = "mango tree";

	strncpy(str, "apple-pie", 5); // str�� "����"���� ���ڸ�ŭ �ٲٰڴ�
	str[5] = '\0'; // ���ڰ� ������ �� ���ڸ� �߰��ϸ� ������ �������� / ��� �� apple

	printf("%s\n", str);

	return 0;
}