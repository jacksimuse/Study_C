#include <stdio.h>

extern int count; // extern은 다른 파일에 전역변수 참조 가능
int total = 0;

int input_data()
{
	int pos;

	while (1)
	{
		printf("양수 입력 : ");
		scanf("%d", &pos);
		if (pos < 0) break;
		count++;
		total += pos;
	}

	return total;
}