#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{ // ���� ��Ģ���� ��ȣ�� �޾Ƽ� ����ϱ�
	int a, b;
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
		printf("%d / %d = %d\n", a, b, a / b);
		break;
	}
	printf("��� ��!");
}