#include <stdio.h>

int main()
{
	int a = 1;
	int i;

	for (i = 0; i < 3; i++) // for( ; ; ) for문 무한반복
	{
		a = a * 2;
	}
	printf("a : %d\n", a);

	return 0;
}