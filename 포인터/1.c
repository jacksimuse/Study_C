#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	// �� �� �� �� / �� �� �� ��
	char ch;
	printf("�빮�ڸ� �Է��ϼ��� : ");
	scanf("%c", &ch);
	while (ch < 65 || ch > 122)
	{
		printf("�ٽ� �Է��ϱ�~\n");
		printf("�빮�ڸ� �Է��ϼ��� : ");
		scanf(" %c", &ch);
	}
	printf("�ҹ��ڷ� �ٲ�帲 ���� : %c\n", ch + 32);

	printf("�ҹ��ڸ� �Է��ϼ��� : ");
	scanf(" %c", &ch);
	while (ch < 65 || ch > 122)
	{
		printf("�ٽ� �Է��ϱ�~\n");
		printf("�빮�ڸ� �Է��ϼ��� : ");
		scanf(" %c", &ch);
	}
	printf("�빮�ڷ� �ٲ�帲 ���� : %c\n", ch - 32);
}