#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[80] = "strawberry"; // �����Ϸ��� �ʱ�ȭ�Ҷ��� �ι��� �־��� / ���� �����Ҷ� �������� �ؾߵ�
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("���� ���ڿ� : %s\n", str1); 
	strcpy(str1, str2); // str(������� ��, ������ ����)
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps1);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps2);
	printf("�ٲ� ���ڿ� : %s\n", str2);

	strcpy(str1, "banana");
	printf("�ٲ� ���ڿ� : %s\n", str1);

	return 0;
}