#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{ // 0 을 나눠보기 + while에 특정 입력어를 받을때 종료
	while (1)
	{
		char ch;
		int a, b;
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
			if (b == 0)
			{
				printf("0을 나누면 무한대이므로 예외처리가 필요합니다\n");
			}
			else
			{
				printf("%d / %d = %d\n", a, b, a / b);
				break;
			}
		}
		printf("계산 끝!\n");
		printf("또 합니까?\n");
		scanf("%c", &ch);
		if (ch == 'n')
		{
			printf("안합답니다 ㅠㅠ");
			break;
			}
		}
	}
		
