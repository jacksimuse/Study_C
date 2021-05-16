#include <stdio.h>

void fruit(int count);

int main()
{
	fruit(1);

	return 0;
}

void fruit(int count)
{
	printf("apple\n");
	if (count == 3) return; // if가 만족하면 함수를 호출한 곳으로 return한다는 말 
	fruit(count + 1);
	printf("jam\n");
}