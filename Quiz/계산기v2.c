#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{ // 값과 사칙연산 기호를 받아서 계산하기
	int a, b;
	printf("두 수를 입력하세요 : ");
	scanf("%d %d", &a, &b);
	printf("받은 값 : %d %d\n", a, b);
	
	char calculator;
	
	printf("어떤 연산을 할까요? +, - , *, / 로 표현해주세요\n");
	scanf(" %c", &calculator);
	
	switch (calculator)
	{
	case '+':
		printf("%d + %d = %d\n", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d\n", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d\n", a, b, a * b);
		break;
	case '/':
		printf("%d / %d = %d\n", a, b, a / b);
		break;
	}
	printf("계산 끝!");
}