#include <stdio.h>

void assign();

int main()
{
	auto int a = 0;

	assign();
	printf("main 함수 a : %d\n", a);

	return 0;
}

void assign()
{
	int a;

	a = 10;
	printf("assign 함수 a : %d\n", a);
}