//5���� ��� ���̵�, ����̸�, �Ѵ� �޿��� �Է¹޾� ����� ��
//5�� ����� �޿� �Ѿװ� ��� �޿����� ���Ͻÿ�
//�̸��� �����Ҵ翡 �����Ѵ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct employee {
	int id; // �����ȣ
	char* name; // ����̸�
	int salary; // �޿�
}Employee;

int main()
{
	int i;
	int temp = 0;
	Employee s1[5];
	char str[20];

	for (i = 0; i < 5; i++)
	{
		printf("��� ��ȣ�� �Է��ϼ��� : ");
		scanf("%10d", &s1[i].id);

		printf("�̸��� �Է��ϼ��� : ");
		scanf("%s", str);
		s1[i].name = (char*)malloc(strlen(str) + 1);

		printf("�޿��� �Է��ϼ��� : ");
		scanf("%10d", &s1[i].salary);
		temp += s1[i].salary;
		printf("\n");
	}

	printf("�������\n");
	for (i = 0; i < 5; i++)
	{
		if (s1[i].name != NULL) strcpy(s1[i].name, str);
		printf("----- �����ȣ %d, �̸� %s, �޿� %d -----\n\n", s1[i].id, str, s1[i].salary);
	}
	printf("5�� ����� �޿� �Ѿ��� : %d\n��� �޿����� : %.lf", temp, (double)temp / 5);

	for (i = 0; i < 5; i++)
	{
		free(s1[i].name);
	}

	return 0;
}