#include <stdio.h>

int sum(int, int); // �Լ� ������ ���� ��, ����� ������ ���ƾߵ� ������ int�� ����

int main()
{
	int (*fp)(int, int);
	int res;

	fp = sum;
	res = fp(10, 20);
	printf("result : %d\n", res);

	return 0;
}

int sum(int a, int b)
{
	return(a + b);
}