#include <stdio.h>

void add_ten(int* pa);

int main()
{
	int a = 10;

	add_ten(&a); // 함수에 주소를 준다
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int* pa) // 포인터로 주소를 받는다
{
	*pa = *pa + 10;
}