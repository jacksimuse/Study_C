#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* pi;
	double* pd;
	// �޸� ���� �Ҵ� �� ������ ����
	pi = (int*)malloc(sizeof(int)); // (int *)���� ���� / ����� ��� �˷��ִ°� ����
	if (pi == NULL)
	{
		printf("# �޸𸮰� �����մϴ�. \n");
		exit(1);
	}
	pd = (double*)malloc(sizeof(double));

	*pi = 10;
	*pd = 3.4;

	printf("���������� ��� : %d\n", *pi);
	printf("�Ǽ������� ��� : %.1lf\n", *pd);

	free(pi); // ���� �Ҵ� ���� ��ȯ malloc�� free�� ¦ / new��  delete ¦ ������ �Ҹ���
	free(pd);

	return 0;
}