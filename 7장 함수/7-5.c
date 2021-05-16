#include <stdio.h>

void fruit();

int main()
{
	fruit();

	return 0;
}

void fruit()
{
	printf("apple\n"); // 재귀함수는 종료시키는 점이 필요함
	fruit();
}