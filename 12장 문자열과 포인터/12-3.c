#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[80];

	printf("���ڿ� �Է� : "); 
	scanf("%s", str); // ���� ���� ���ڿ��� �غ���
	printf("ù ��° �ܾ� : %s\n", str); // ���� �������� �޾ƿ´�
	scanf("%s", str); // ���⸦ �޾ƿ´�
	printf("���ۿ� ���� �ִ� �� ��° �ܾ� : %s\n", str); // ���� ���� ���� �޾ƿ´�
}