#include <stdio.h>

int main()
{
	int a; // �ڷ��� ���� <- ��������  / ������ ������ ũ�⸦ �ڷ������� �˷���
	int b, c; // ������ �ڷ����̸� ���Ű���
	double da;
	char ch;

	a = 10; // ���� ������ =�� �������� �������� ���ʿ� ����ִ´�
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	/*printf("���� a�� �� : %d\n", a);
	printf("���� b�� �� : %d\n", b);
	printf("���� c�� �� : %d\n", c);
	printf("���� da�� �� : %.1lf\n", da);
	printf("���� ch�� �� : %c\n", ch);*/

	printf("char ũ�� : %d\n", sizeof(char)); // 1
	printf("short ũ�� : %d\n", sizeof(short)); // 2
	printf("int ũ�� : %d\n", sizeof(int)); // 4
	printf("long ũ�� : %d\n", sizeof(long)); // 4
	printf("double ũ�� : %d\n", sizeof(double)); // 8
	
	

	return 0;
}