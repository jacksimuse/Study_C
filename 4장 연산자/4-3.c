#include <stdio.h>

int main()
{
	int a = 10, b = 20;
	int c = 10, d = 20;

	++a; // 변수의 값을 1만큼 증가
	--b; // 변수의 값을 1만큼 감소

	c++; // 대입하는 연산이 없으면 자체로 계산이 됨
	d--; 

	printf("%d\t%d\n", a, b);
	printf("%d\t%d\n", c, d);

	return 0;
}