#include <stdio.h>

int main()
{
	int i, j;
	
	for (i = 0; i < 7; i++)
	{
		for (j = 7; j >i; j--)
		{
			printf(" ");
		}
		for (j = 0; j < (2 * i) + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < 8; i++)
	{
		for (j = 1; j <= i ; j++)
		{
			printf(" ");
		}
		for (j = 14; j/2 >= i ; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}