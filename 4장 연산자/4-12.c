#include <stdio.h>

int main()
{
	int a = 10, b = 20, res;

	res = (a > b) ? a : b; // ? 앞을 비교해서 참이면 a 틀리면 b로 나타나게함
	printf("큰 값 : %d \n", res);

	return 0;
}