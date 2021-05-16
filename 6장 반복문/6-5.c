#include <stdio.h>

int main()
{
	int i;
	int sum = 0;

	for (i = 0; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break; // break는 반복문을 빠져나오는 것이다 if를 벗어나는게 아님
	}
	printf("누적한 값 : %d\n", sum);

	printf("마지막으로 더한 값 : %d\n", i);

	return 0;
}