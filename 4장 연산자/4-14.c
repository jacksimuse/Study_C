#include <stdio.h>

int main()
{
	int a = 10, b = 5;
	int res;

	res = a / b * 2;
	printf("res = %d\n", res); // �켱������ ���Ƽ� �տ��� ���ʴ�� ���
	res = ++a * 3;
	printf("res = %d\n", res); // �켱������ ���ϱ���� 
	res = a > b && a != 5;
	printf("res = %d\n", res); 
	res = a % 3 == 0;
	printf("res = %d\n", res); // ������� Ʋ���� 0
}