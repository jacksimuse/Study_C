#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("������ ���߿� ������ ���� �̸� : ");
	if (strcmp(str1, str2) > 0) // strcmp(�񱳴�� 1, �񱳴�� 2) 1�� 2���� ���߿� ������ /�ƽ�Ű�ڵ� ������ ���ϱ� ����
		printf("%s\n", str1);	// ��1 ���
	else
		printf("%s\n", str2);   // ��2 ���

	printf("�տ��� 3���� ���ڸ� ���ϸ�?\n");
	if (strcmp(str1, str2, 3) == 0) // strcmp(�񱳴�� 1, �񱳴�� 2, ����) 1�� 2�� ������ 0��ȯ 
		printf("����\n");	// ��1 ���
	else
		printf("�ٸ���\n"); // ��2 ���

	return 0;
}