#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* pi; // �Ҵ��� ���� ������ ������ ������
	int size = 5; // �� ���� �Ҵ��� ���� ������ ũ��, int�� ���� 5����
	int count = 0; // ���� �Էµ� ��� ����
	int num, i; // ����� �Է��� ����, �ݺ� ���� ����

	pi = (int*)calloc(size, sizeof(int)); // 5���� ���� ���� �Ҵ� 
	while (1)
	{
		printf("����� �Է��ϼ��� => ");
		scanf("%d", &num);
		if (num <= 0) break;
		if (count == size) // ���� ������ ��� ����ϸ�
		{
			size += 5; // ũ�⸦ 5��ŭ �ø���
			pi = (int*)realloc(pi, size * sizeof(int)); // ���� ���� ���Ҵ� / realloc�� �������� ������ ������ ��� NULL���� �� ���� �����ϱ�
			// ������� �� �ִ� ������ ���� ������ �ִ� �����͵��� ��Ƶΰ� ���Ҵ��� �ϴ°� ��õ
		}
		pi[count++] = num;
	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}
	free(pi); // ���� �ݳ�

	return 0;
}

// realloc�� ���� NULL���� ������ ��쿡 ����ϴ� �ڵ�
// int pi_back; ��� ����
// pi_back = pi ��� ������ ���� ������ ��Ƶд�
// if (pi == NULL) pi = pi_back  / pi�� NULL�� �ɶ� pi�� pi_back�� �ٽ� ����ش�