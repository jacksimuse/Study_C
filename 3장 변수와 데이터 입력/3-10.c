#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age; // ���̴� ������
	double height; // Ű�� �Ǽ���

	printf("���̿� Ű�� �Է��ϼ��� : "); // �Է� �ȳ� �޽��� ���
	scanf("%d%lf", &age, &height); // ���̿� Ű�� �Բ� �Է�
	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�\n", age, height); // �Է°� ���

	return 0;
}