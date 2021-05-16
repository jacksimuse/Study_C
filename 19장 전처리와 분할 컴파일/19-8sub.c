#include <stdio.h>

void input_data(int *pa, int *pb)
{
	scanf("%d %d", pa, pb);
}

double avg(int a, int b)
{
	double res;

	res = a + b / 2;

	return res;
}