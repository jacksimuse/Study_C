#include <stdio.h>

void func(int , int ); // �Լ��������� �Է¿� Ÿ�Ը� ����� ���� �̸� ���� ����

int main()
{
	int a, b;
	a = 10, b = 20;

	func(a, b); // �Է��� �ִ� �Լ� ȣ��
	return 0;
}

void func(int aa, int ab)
{
	int res;
	res = aa + ab;
	printf("res + %d", res);
}