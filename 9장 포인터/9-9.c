#include <stdio.h>

void swap(int x, int y);

int main()
{
	int a = 10, b = 20;

	swap(a, b); // 3. swap�Լ��� ���������� �ٽ� �Է��� a, b�� ���
	printf("a:%d, b:%d\n", a, b); // 4. a�� b�� �ᱹ ��µǾ��ٴ� ����

	return 0;
}

void swap(int x, int y) // 1. a�� b�� ���� �����ؼ� x, y�� ������
{
	int temp; 

	temp = x;
	x = y;
	y = temp;  //  2. ���鳢�� ��ȯ�ϰ� ����
}