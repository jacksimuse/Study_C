#include <stdio.h>

void func(int , int ); // 함수원형에서 입력에 타입만 적어도됨 변수 이름 생략 가능

int main()
{
	int a, b;
	a = 10, b = 20;

	func(a, b); // 입력이 있는 함수 호출
	return 0;
}

void func(int aa, int ab)
{
	int res;
	res = aa + ab;
	printf("res + %d", res);
}