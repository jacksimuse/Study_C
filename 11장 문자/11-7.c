#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int num, grade;

	// ver1 / ���� : 10 ���� a ����
	printf("�й� �Է� : "); 
	scanf("%d", &num); // 10�� �޾ƿ´�
	getchar(); // ���Ͱ� ���ڶ� �޾ƿ´� / ���������ؼ� �׳� getchar���ذ���
	printf("���� �Է� : "); 
	grade = getchar(); // a �� �޴´�
	printf("�й� : %d, ���� : %c", num, grade); // ��� : 10�� a�� �޴´�


	// ver2 / ���� : a ���� 10 ����
	printf("���� �Է� : "); 
	grade = getchar(); // a�� �޾ƿ�
	printf("�й� �Է� : ");
	scanf("%d", &num); // ���ڸ� �޴°Ŷ� ���� �ȹް� 10 �޾ƿ�
	//getchar();
	printf("�й� : %d, ���� : %c", num, grade); // ��� : 10�� a�� �޴´�

	return 0;
}