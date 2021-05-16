#include <stdio.h>

void input_data(int *, int *);
double avg(int a, int b);

int main()
{
	int a, b;
	double temp;

	input_data(&a, &b);
	temp = avg(a, b);

	printf("%.1lf", temp);

}