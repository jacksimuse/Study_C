#include <stdio.h>

int main()
{
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("%c\n", ch); // 2. �ʱ�ȭ �ȵ� ������ ������ ����ֳ�
	printf("%d\n", in);
	printf("%.lf\n", db);

	printf("char�� ������ �ּ� ũ�� : %d\n", sizeof(&ch)); // 1. &������(�ּ�)���� �ʱ�ȭ �ȵ� 4ĭ¥�� ���� ����ִµ�?
	printf("int�� ������ �ּ� ũ�� : %d\n", sizeof(&in));
	printf("double�� ������ �ּ� ũ�� : %d\n", sizeof(&db));

	printf("char * �������� ũ�� : %d\n", sizeof(pc)); // 3. �����͸� = ����Ű�� �ּ� / �׳� �ּ� ũ�Ⱑ 4�ΰɷ�
	printf("int * �������� ũ��: %d\n", sizeof(in));
	printf("double * �������� ũ�� : %d\n", sizeof(pd));

	printf("char * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pc)); // *�����͸� = ����Ű�� ����
	printf("int * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pi));
	printf("double * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pd));

}