#include <stdio.h>

int main()
{
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z'))
	{
		small = cap + ('a' - 65);
	}
	printf("대문자 : %c %c", cap, '\n'); // \n을 문자로 출력가능 ->줄바꿈 문자
	printf("소문자  : %c", small);

	return 0;
}