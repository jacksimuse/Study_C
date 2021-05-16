#include <stdio.h>

int main()
{
	int ary[5];

	printf("  ary의 값 : %u\t", ary); // 주소로서의 배열명의 값
	printf("ary의 주소 : %u\n", &ary); // 배열의 주소
	printf("  ary + 1 : %u\t", ary + 1); // 방 한칸 차이 int라서 4
	printf("  &ary + 1 : %u\n", &ary + 1); // 주소 전체의 차이 4 x 5 = 20차이

	return 0;
}