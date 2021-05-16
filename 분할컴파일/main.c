#include <stdio.h>
#include "user.h"

int main()
{
	int n1, n2;
	int result;
	input_data(&n1, &n2);
	result = sum(n1, n2);
	printf("гу : %d\n", result);
}