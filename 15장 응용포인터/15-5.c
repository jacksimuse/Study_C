#include <stdio.h>

int main()
{
	int ary[3][4] = { {1,2,3,4,}, {5,6,7,8}, {9,10,11,12} };
	int(*pa)[4]; // 4¥�� �迭�� ���� ������ / int *pa[4] ������ �迭
	int i, j;

	pa = ary;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]); // �迭 �����͸� ���� 2���� �迭ó�� ��� ����
		}
		printf("\n");
	}

	return 0;
}