#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{ // 0 �� �������� + while�� Ư�� �Է¾ ������ ����
	while (1)
	{
		char ch;
		int a, b;
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

		char calculator;

		printf("� ������ �ұ��? +, - , *, / �� ǥ�����ּ���\n");
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
				printf("0�� ������ ���Ѵ��̹Ƿ� ����ó���� �ʿ��մϴ�\n");
			}
			else
			{
				printf("%d / %d = %d\n", a, b, a / b);
				break;
			}
		}
		printf("��� ��!\n");
		printf("�� �մϱ�?\n");
		scanf("%c", &ch);
		if (ch == 'n')
		{
			printf("���մ�ϴ� �Ф�");
			break;
			}
		}
	}
		
