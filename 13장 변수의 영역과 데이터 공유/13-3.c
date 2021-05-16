#include <stdio.h>

void assign10();
void assign20();

int a; // 전역변수는 자동으로 0으로 초기화

int main()
{
	printf("함수 호출 전 a 값 : %d\n", a);

	assign10();
	assign20();

	printf("함수 호출 후 a 값 : %d\n", a);

	return 0;
}

void assign10()
{
	a = 10;
}

void assign20() 
{
	int  a;

	a = 20;
}