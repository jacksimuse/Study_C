#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char grade; // ������ �Է��� ����
	char name[20]; // �̸��� �Է��� �迭

	printf("���� �Է� : ");
	scanf("%c", &grade); // grage ������ ���� ���� �Է�
	printf("�̸� �Է� : ");
	scanf("%s", name); // name �迭�� �̸� ���ڿ� �Է�, &�� ��������ʴ´�
	// �迭�� �ּұ� ����
	printf("%s�� ������ %c�Դϴ�", name, grade); 

	//���� �ּ�50
	int age;
	char address[50];

	printf("�̸� �Է� :");
	scanf("%s", name);
	printf("���� �Է� :");
	scanf("%d", &age);
	printf("�ּ� �Է� :");
	scanf("%s", address);

	printf("%s�� ���̿� �ּҴ� %d, %s�Դϴ�", name, age, address);
}