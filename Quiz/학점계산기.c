//5�� �л��� ����, ����, ����, ü�� ������ �Է¹޴´�(2���� �迭 ���)
// ���κ� ������ ����� ���Ѵ�
// �׸��� ���� ������ ��յ� ���Ͻð�  ����� �Ҽ��� ù°�ڸ���

//2���� �迭�� �����
//�� ���� �հ� �տ� ���� ���� ���� ����� ������
//�Լ��� �A��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void gaein(int* total[], int i, int j);

int main()
{
	int sub[5][4];
	int i, j, temp;
	int std_add[5] = { 0 }, sub_add[4] = { 0 };
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d���л��� ������ �������� : ", i + 1);
			scanf("%d", &temp);
			sub[i][j] = temp;
			std_add[i] += temp;
		}
		printf("\n");
	}

	for (j = 0; j < 4; j++)
	{
		for (i = 0; i < 5; i++)
		{
			sub_add[j] = sub[i][j];
		}
	}
	
	printf("=================�л�������=====================\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d��° �л� ���� : %d\t", i + 1, std_add[i]);
		printf("��� : %.1lf\n", (double)std_add[i] / 4);
	}

	printf("=================��������=====================\n");
	printf("���� ���� : %d\t", sub_add[0]);
	printf("��� : %.1lf\n", (double)sub_add[0] / 5);
	printf("���� ���� : %d\t", sub_add[1]);
	printf("��� : %.1lf\n", (double)sub_add[1] / 5);
	printf("���� ���� : %d\t", sub_add[2]);
	printf("��� : %.1lf\n", (double)sub_add[2] / 5);
	printf("ü�� ���� : %d\t", sub_add[3]);
	printf("��� : %.1lf\n", (double)sub_add[3] / 5);
}

void gaein(int* total[], int i, int j)
{

}