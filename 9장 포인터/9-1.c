#include <stdio.h>

int main()
{
	int a;
	double b;
	char c;

	printf("int형 변수의 주소 : %u\n", &a); // 주소 연산자로 주소 계산
	printf("double형 변수의 주소 : %u\n", &b);
	printf("char형 변수의 주소 : %u\n", &c);

	return 0;
}