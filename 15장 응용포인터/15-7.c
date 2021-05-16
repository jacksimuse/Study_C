#include <stdio.h>

int sum(int, int); // 함수 포인터 사용시 입, 출력의 형식이 같아야됨 지금은 int로 같음

int main()
{
	int (*fp)(int, int);
	int res;

	fp = sum;
	res = fp(10, 20);
	printf("result : %d\n", res);

	return 0;
}

int sum(int a, int b)
{
	return(a + b);
}