#include <stdio.h>

void fruit();

int main()
{
	fruit();

	return 0;
}

void fruit()
{
	printf("apple\n"); // ����Լ��� �����Ű�� ���� �ʿ���
	fruit();
}