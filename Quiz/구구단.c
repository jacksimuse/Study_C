#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j;
	// ó������ ������ �ڵ� ������
	for (i = 2; i < 10; i++)
	{
		printf("%d�� ����\n", i);
		for (j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("%d�� ��\n", i);
	}

	// ���� �޾ƿ��� ������
	printf("�������� ���ڸ� �����ּ��� : ");
	scanf("%d", &i);
	printf("%d���� �����մϴ�\n", i);

	for (j = 1; j < 10; j++)
	{
		printf("%d�� ����\n", i);
		printf("%d * %d = %d\n", i, j, i * j);
	}

	// ���� �����ܿ� �ڿ����� �ƴѰ��� ������?
	printf("�������� ���ڸ� �����ּ��� : ");
	scanf("%d", &i);

	if (i > 0)
	for (j = 1; j < 10; j++)
	{
		printf("%d�� ����\n", i);
		printf("%d * %d = %d\n", i, j, i * j);
	}
	else
	{
		printf("�ڿ����� �޽��ϴ�");
	}
}