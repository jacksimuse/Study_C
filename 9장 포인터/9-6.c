#include <stdio.h>

int main()
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p; // double pd�� int p�� �ڷ����� ���������� �ּҸ� ��°���
	printf("%lf\n", *pd); // �׷��� �Ҵ�������� ������ �־ �ƹ����� ���� ������ ���� 

	return 0;
}