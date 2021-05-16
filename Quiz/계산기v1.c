#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{ // 값을 받아서 사칙연산하기
	int a, b;
	scanf("%d %d", &a, &b);
	printf("두 값 받아오기 %d, %d\n", a, b);
	int add, sub, mul, div;
	add = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	printf("%d + %d = %d\n", a, b, add);
	printf("%d - %d = %d\n", a, b, sub);
	printf("%d * %d = %d\n", a, b, mul);
	printf("%d / %d = %d\n", a, b, div);
}