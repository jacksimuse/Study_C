#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	

	int a;
	char b;
	printf("�����ϳ��� �Է��ϼ��� : ");
	scanf("%d", &a);
	getchar(); // 3. �ȶ���ٰŸ� �̰Ÿ� �־��ش�
	printf("���� �ϳ��� �Է��ϼ��� : "); // 1. ���� ���� ���ڸ� scanf�� ������ ���͸� ���ڷ� �ν��ϱ⋚����
	scanf(" %c", &b); // 2. %c�տ� ��ĭ ����ش�
	printf("�Էµ� ���� %d, %c �Դϴ�.\n", a, b);

	return 0;

}