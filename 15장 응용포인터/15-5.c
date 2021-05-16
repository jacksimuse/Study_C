#include <stdio.h>

int main()
{
	int ary[3][4] = { {1,2,3,4,}, {5,6,7,8}, {9,10,11,12} };
	int(*pa)[4]; // 4짜리 배열을 갖는 포인터 / int *pa[4] 포인터 배열
	int i, j;

	pa = ary;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]); // 배열 포인터를 쓰면 2차원 배열처럼 사용 가능
		}
		printf("\n");
	}

	return 0;
}