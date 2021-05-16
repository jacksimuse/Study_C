#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]); // 값을 지정안하면 공간채우기용 쓰레기값

	return 0;
}