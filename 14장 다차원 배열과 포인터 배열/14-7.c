#include <stdio.h>

int main()
{
	int ary1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	// int ary1[4] = { 1,2,3,4 }; // 1���� �迭���� ����� 
	int ary2[4] = { 11,12,13,14 };
	int ary3[4] = { 21,22,23,24 };
	int* pary[3] = { ary1,ary2,ary3 }; // �����Ϳ� �迭�� ��´�
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%5d", pary[i][j]); // �����͸� ������ -> 2���� �迭�̵ȴ�
		}
		printf("\n");
	}

	return 0;
}