#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//char grade; // ������ �Է��� ����
	//char name[20]; // �̸��� �Է��� �迭

	//printf("���� �Է� : ");
	//scanf("%c", &grade); // grage ������ ���� ���� �Է�
	//printf("�̸� �Է� : ");
	//scanf("%s", name); // name �迭�� �̸� ���ڿ� �Է�, &�� ��������ʴ´�
	//// �迭�� �ּұ� ����
	//printf("%s�� ������ %c�Դϴ�", name, grade); 

	// �̸�20 ���� �ּ�50
	//char name[20];
	//int age;
	//char address[1000];

	//printf("�̸� �Է� :");
	//scanf("%s", name);
	//printf("���� �Է� :");
	//scanf("%d", &age);
	//printf("�ּ� �Է� :");
	//scanf("%s", address);

	//printf("%s�� ���̿� �ּҴ� %d, %s�Դϴ�", name, age, address);

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