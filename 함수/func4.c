#include <stdio.h>

int func(int, int); // 1. �Լ� ����

int main()
{
	int a, b;
	int result;
	a = 10, b = 20;

	result = func(a, b); // 3. �Լ����� ���� ���� result�� �����ߵ�
	printf("result : %d\n", result);
	return 0;
}

int func(int aa, int ab) // ��°� �Է��� �ִ� �Լ�
{
	int res;
	res = aa + ab;
	return res; //  2. �������� ������ ��
}