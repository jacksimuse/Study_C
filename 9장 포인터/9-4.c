#include <stdio.h>

int main()
{
	int a = 10, b = 20;
	const int* pa = &a; // ������ pa�� ���� a�� ����Ų��

	printf("����  a �� : %d\n", *pa); // pa�� ���� a�� ���
	pa = &b;						 // pa�� �ٽ� b�� ����Ű����
	printf("���� b �� : %d\n", *pa); // pa�� ���� b�� ���
	pa = &a;						 // pa�� �ٽ� a�� ����Ű����
	a = 20;							 // a�� 20 ����
	printf("���� a �� : %d\n", *pa); // pa�� ���� a�� ���

	return 0;
}