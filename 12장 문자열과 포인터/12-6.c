#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age;
	char name[20];

	printf("���� �Է� : ");
	scanf("%d", &age);

	printf("�̸� �Է� : ");
	gets(name);
	printf("���� :%d, �̸� : %s\n", age, name);
}