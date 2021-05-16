#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j;
	// 처음부터 끝까지 자동 구구단
	for (i = 2; i < 10; i++)
	{
		printf("%d단 시작\n", i);
		for (j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("%d단 끝\n", i);
	}

	// 숫자 받아오는 구구단
	printf("구구단할 숫자를 적어주세요 : ");
	scanf("%d", &i);
	printf("%d단을 시작합니다\n", i);

	for (j = 1; j < 10; j++)
	{
		printf("%d단 시작\n", i);
		printf("%d * %d = %d\n", i, j, i * j);
	}

	// 번외 구구단에 자연수가 아닌것을 넣으면?
	printf("구구단할 숫자를 적어주세요 : ");
	scanf("%d", &i);

	if (i > 0)
	for (j = 1; j < 10; j++)
	{
		printf("%d단 시작\n", i);
		printf("%d * %d = %d\n", i, j, i * j);
	}
	else
	{
		printf("자연수만 받습니다");
	}
}