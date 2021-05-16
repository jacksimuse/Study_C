#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1. 로또 번호를 저장할 수 있는 배열 선언 lotto[6]
// 2. 로또번호 입력 (동일한 번호가 입력시 에러 메세지를 출력하고 다시 입력 받으시오)
// 3. input_lotto(), print_lotto() 함수를 이용해서 만들기

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
				printf("같은 숫자입니다 다시 쓰세요");
				scanf("%d", pl[i]);
			}
		}
	}
}
