#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int (*fp)(int, int));

int Sum(int, int);
int Sub(int, int);
int Mul(int, int);
int Div(int, int);

int main()
{ // 0 �� �������� + while�� Ư�� �Է¾ ������ ����
	char ch;
	int a, b;
	char calc;
	int result;
	while (1)
	{
		printf("���� ŵ�ϱ�?\n������ : y / n\n"); // �ٸ������ ����� ���� ������ ���� �˷��ֱ�
		scanf("%c", &ch);

		if (ch == 'n')
		{
			printf("���մ�ϴ� �Ф�");
			break;
		}
		else if (ch == 'y')
		{
			printf("���⸦ �����մϴ�\n");
		}
		else
		{
			while (1)
			{
				printf("�ι� ���ϰ� �ϳ� ^^\n");
				printf("���� ŵ�ϱ�?\n������ : y / n\n");
				scanf(" %c", &ch);

				if (ch == 'n')
				{
					printf("���մ�ϴ� �Ф�");
					break;
				}
				else if (ch == 'y')
				{
					printf("���⸦ �����մϴ�\n");
					break;
				}
			}
			break;
		}

		printf("�� ���� �Է��ϼ��� : ");
		scanf("%d %d", &a, &b);
		printf("���� �� : %d %d\n", a, b);

		printf("� ������ �ұ��? +, - , *, / �� ǥ�����ּ���\n");
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
				printf("0�� ������ ���Ѵ��̹Ƿ� ����ó���� �ʿ��մϴ�\n");
			}
			else
			{
				result = Div(a, b);
			}
		}
		if (calc == '/')
		{
			printf("�������� : %d", result);
		}
		printf("��� ��!\n");
		printf("�� �մϱ�? ������ y / n\n");
		scanf(" %c", &ch);
		if (ch == 'n')
		{
			printf("���մ�ϴ� �Ф�");
			break;
		}
	}
}

void func(int (*fp)(int, int))
{
	int a = 0, b = 0;
	int res;

	res = fp(a, b);
	printf("��������  : %d", res);

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

