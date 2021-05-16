#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char animal[5][20];
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]); // 100 / 20
	for (i = 0; i < count; i++)
	{
		scanf("%s", animal[i]);
	}

	for (i = 0; i < count; i++)
	{
		printf("%s ", animal[i]);
	}

	return 0;
}