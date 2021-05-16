#include <stdio.h>

int func(int, int); // 1. 함수 선언

int main()
{
	int a, b;
	int result;
	a = 10, b = 20;

	result = func(a, b); // 3. 함수에서 받은 값을 result에 담아줘야됨
	printf("result : %d\n", result);
	return 0;
}

int func(int aa, int ab) // 출력과 입력이 있는 함수
{
	int res;
	res = aa + ab;
	return res; //  2. 메인으로 돌려줄 값
}