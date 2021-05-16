#include <stdio.h>
#define VER 7
#define BIT16

int main()
{
	int max;

#if VER >=6
	printf("버전 %d입니다\n", VER);
#endif

#ifndef BIT16 // n =  not
	max = 32767;
#else
	max = 2147483647;
#endif

	printf("int형 변수의 최댓값 : %d\n", max);

	return 0;
}
