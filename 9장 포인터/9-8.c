#include <stdio.h>

void swap();

int main()
{
	int a = 10, b = 20;

	swap();
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap()
{
	int temp;

	temp = a; // ������ �ش� �Լ��ȿ����� ������ �� �� �ִ�
	a = b;
	b = temp;
}