#include <stdio.h>

int main()
{
	int a = 10, b = 20;
	int c = 10, d = 20;

	++a; // ������ ���� 1��ŭ ����
	--b; // ������ ���� 1��ŭ ����

	c++; // �����ϴ� ������ ������ ��ü�� ����� ��
	d--; 

	printf("%d\t%d\n", a, b);
	printf("%d\t%d\n", c, d);

	return 0;
}