#include <stdio.h>

int main()
{
	int i;
	int sum = 0;

	for (i = 0; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break; // break�� �ݺ����� ���������� ���̴� if�� ����°� �ƴ�
	}
	printf("������ �� : %d\n", sum);

	printf("���������� ���� �� : %d\n", i);

	return 0;
}