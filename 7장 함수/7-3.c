#include <stdio.h>

void print_char(char ch, int count); 

int main()
{
	print_char('@', 5);

	return 0;
}

void print_char(char ch, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}

	return; // void일 경우 빼는걸 추천
}