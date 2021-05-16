#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_ary(int* pa, int size);
void swap_ary(int *pa, int size);
void print_ary(int *pa, int size);

int main()
{
	int ary[10];
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	print_ary(ary, size);
	swap_ary(ary, size);
	print_ary(ary, size);

	return 0;
}

void input_ary(int* pa, int size)
{
	int j;
	for (j = 0; j < size; j++)
	{
		scanf("%d", &pa[j]);
	}
}

void print_ary(int* pa, int size)
{
	int j;
	for (j = 0; j < size; j++)
	{
		printf("%d ", pa[j]);
	}
}

void swap_ary(int* pa, int size)
{
	int temp = 0;
	int j;
	for (j = 0; j < size / 2; j++)
	{
		temp = pa[j];
		pa[j] = pa[9 - j];
		pa[9 - j] = temp;
	}
}


