#include <stdio.h>

void swap();

int main()
{
	int a = 10, b = 20;

	swap();
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap()
{
	int temp;

	temp = a; // 변수는 해당 함수안에서만 사용됨을 알 수 있다
	a = b;
	b = temp;
}