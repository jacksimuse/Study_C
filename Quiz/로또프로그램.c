#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1. �ζ� ��ȣ�� ������ �� �ִ� �迭 ���� lotto[6]
// 2. �ζǹ�ȣ �Է� (������ ��ȣ�� �Է½� ���� �޼����� ����ϰ� �ٽ� �Է� �����ÿ�)
// 3. input_lotto(), print_lotto() �Լ��� �̿��ؼ� �����

void input_lotto(int* pl, int count);
void print_lotto(int* pl, int count);

int main()
{
	int lotto[6];

	input_lotto(lotto, 6);
	print_lotto(lotto, 6);
}

void input_lotto(int* pl, int count)
{
	int i, j;
	int temp;
	for (i = 0; i < count; i++)
	{
		scanf("%d", pl[i]);
		temp = pl[i];
		for (j = 0; j < i; j++)
		{
			while (temp == pl[i])
			{
				printf("���� �����Դϴ� �ٽ� ������");
				scanf("%d", pl[i]);
			}
		}
	}
}
