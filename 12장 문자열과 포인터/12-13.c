#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* my_strcpy(char* pd, char* ps);

int main()
{
	char *ch1[100], *ch2[100];
	char *result;

	scanf("%s %s", &ch1, &ch2);
	result = my_strcpy(ch1, ch2);
	printf("%s", result);

	return 0;
}

char* my_strcpy(char* pd, char* ps)
{
	int i;
	for (i = 0; i < 100; i++)
	{
		if (pd[i] != ps[i])
		pd[i] = ps[i];
	}
	return pd;
}