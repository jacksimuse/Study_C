#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main()
{
	int score[5];
	int i;
	int total = 0;
	double avg;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < 5; i++)
	{
		total += score[i];
	}
	avg = total / 5.0;

	for (i = 0; i < 5; i++)
	{
		printf("%2d", score[i]); // %����d = ���ڸ�ŭ ���� �������� ���
	}
	printf("\n");
	
	printf("��� : %.1lf\n", avg);

	return 0;
}