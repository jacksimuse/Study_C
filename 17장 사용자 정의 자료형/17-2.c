#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile // profile�̶�� ����ü �����
{
	char name[20]; // �׾ȿ��� �� ���
	int age;
	double height;
	char* intro;
};

int main()
{
	struct profile yuni; // ����ü ����

	strcpy(yuni.name, "������"); // name  �迭 ����� �̸� ����
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.intro = (char*)malloc(80);
	printf("�ڱ�Ұ� : ");
	gets(yuni.intro);

	printf("�̸� : %s\n", yuni.name);
	printf("���� : %d\n", yuni.age);
	printf("Ű : %.1lf\n", yuni.height);
	printf("�ڱ�Ұ� : %s\n", yuni.intro);
	free(yuni.intro);

	return 0;
}