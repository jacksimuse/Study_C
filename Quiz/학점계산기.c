//5명 학생의 국어, 영어, 수학, 체육 점수를 입력받는다(2차원 배열 사용)
// 개인별 총점과 평균을 구한다
// 그리고 과목별 총점과 평균도 구하시고  평균은 소수점 첫째자리만

//2차원 배열을 만든다
//각 방의 합과 합에 대한 방의 수로 평균을 나눈다
//함수로 뺸다
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
			printf("%d번학생의 성적을 넣으세요 : ", i + 1);
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
	
	printf("=================학생별점수=====================\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d번째 학생 총점 : %d\t", i + 1, std_add[i]);
		printf("평균 : %.1lf\n", (double)std_add[i] / 4);
	}

	printf("=================과목별점수=====================\n");
	printf("국어 총점 : %d\t", sub_add[0]);
	printf("평균 : %.1lf\n", (double)sub_add[0] / 5);
	printf("영어 총점 : %d\t", sub_add[1]);
	printf("평균 : %.1lf\n", (double)sub_add[1] / 5);
	printf("수학 총점 : %d\t", sub_add[2]);
	printf("평균 : %.1lf\n", (double)sub_add[2] / 5);
	printf("체육 총점 : %d\t", sub_add[3]);
	printf("평균 : %.1lf\n", (double)sub_add[3] / 5);
}

void gaein(int* total[], int i, int j)
{

}