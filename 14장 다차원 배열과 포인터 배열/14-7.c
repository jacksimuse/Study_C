#include <stdio.h>

int main()
{
	int ary1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	// int ary1[4] = { 1,2,3,4 }; // 1차원 배열들을 만든다 
	int ary2[4] = { 11,12,13,14 };
	int ary3[4] = { 21,22,23,24 };
	int* pary[3] = { ary1,ary2,ary3 }; // 포인터에 배열을 담는다
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%5d", pary[i][j]); // 포인터를 돌린다 -> 2차원 배열이된다
		}
		printf("\n");
	}

	return 0;
}