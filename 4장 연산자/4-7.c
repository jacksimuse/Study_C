#include <stdio.h>

int main()
{
	int a = 10, b = 20, res;

	a + b; // ���� ����� ������
	printf("%d + %d = %d\n", a, b, a + b); // ���⼭ �ٷ� ���

	res = a + b; // ���� ����� ����
	printf("%d + %d = %d\n", a, b, res); // ��� ������ �ҷ���

	return 0;
}