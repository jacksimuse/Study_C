#include <stdio.h>

int main()
{
	int income = 0; // �ҵ濡 �ʱ�ȭ
	double tax; // ����
	const double tax_rate = 0.12; // ���� �ʱ�ȭ

	income = 456; // �ҵ�� ����
	tax = income * tax_rate; // ���� ���
	printf("������ : %.1lf�Դϴ�.\n", tax);

	return 0;
}