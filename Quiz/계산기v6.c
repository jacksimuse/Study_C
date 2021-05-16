#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int (*fp)(int, int));

int Sum(int, int);
int Sub(int, int);
int Mul(int, int);
int Div(int, int);

int main()
{ // 0 을 나눠보기 + while에 특정 입력어를 받을때 종료
	char ch;
	int a, b;
	char calc;
	int result;
	while (1)
	{
		printf("계산기 킵니까?\n선택지 : y / n\n"); // 다른사람이 사용할 수도 있으니 값을 알려주기
		scanf("%c", &ch);

		if (ch == 'n')
		{
			printf("안합답니다 ㅠㅠ");
			break;
		}
		else if (ch == 'y')
		{
			printf("계산기를 실행합니다\n");
		}
		else
		{
			while (1)
			{
				printf("두번 말하게 하네 ^^\n");
				printf("계산기 킵니까?\n선택지 : y / n\n");
				scanf(" %c", &ch);

				if (ch == 'n')
				{
					printf("안합답니다 ㅠㅠ");
					break;
				}
				else if (ch == 'y')
				{
					printf("계산기를 실행합니다\n");
					break;
				}
			}
			break;
		}

		printf("두 수를 입력하세요 : ");
		scanf("%d %d", &a, &b);
		printf("받은 값 : %d %d\n", a, b);

		printf("어떤 연산을 할까요? +, - , *, / 로 표현해주세요\n");
		scanf(" %c", &calc);
		if (calc == '+')
		{
			//result = Sum;
			func(Sum);
		}
		else if (calc == '-')
		{
			//result = Sub(a, b);
			func(Sub);
		}
		else if (calc == '*')
		{
			//result = Mul(a, b);
			func(Mul);
		}
		else if (calc == '/')
		{
			if (b == 0)
			{
				printf("0을 나누면 무한대이므로 예외처리가 필요합니다\n");
			}
			else
			{
				result = Div(a, b);
			}
		}
		if (calc == '/')
		{
			printf("연산결과는 : %d", result);
		}
		printf("계산 끝!\n");
		printf("또 합니까? 선택지 y / n\n");
		scanf(" %c", &ch);
		if (ch == 'n')
		{
			printf("안합답니다 ㅠㅠ");
			break;
		}
	}
}

void func(int (*fp)(int, int))
{
	int a = 0, b = 0;
	int res;

	res = fp(a, b);
	printf("연산결과는  : %d", res);

}

int Sum(int a, int b)
{
	int c;
	c = a + b;
	return c;
}
int Sub(int a, int b)
{
	int c;
	c = a - b;
	return c;
}
int Mul(int a, int b)
{
	int c;
	c = a * b;
	return c;
}
int Div(int a, int b)
{
	int c;
	c = a / b;
	return c;
}

