#include <stdio.h>

int main()
{ // ** ����ȯ�� = ���ʿ��� �Ұ���
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b); //(double)�� ����� a�� b�� �Ǽ��� ��ȯ 
	printf("a = %d, b = %d\n", a, b);
	printf("a / b�� ��� : %.1lf\n", res);

	a = (int)res;
	printf("(int) %.1lf�� ��� : %d\n", res, a); // (int)�� �̿��� res������ ������ ���

	return 0;
}