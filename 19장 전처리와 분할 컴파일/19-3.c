#include <stdio.h>
#define SUM(a, b)((a) + (b))
#define MUL(a, b)((a) * (b))
// 각 인수별로 ()를 해줘야 제대로 된 연산이 나온다 / 모르겠으면 일단 실행 ㄱ
#define test(a)((a) * (10))

int main()
{
	int a = 10, b = 20;
	int x = 30, y = 40;
	int res;

	printf("a + b = %d\n", SUM(a, b));
	printf("x + y = %d\n", SUM(x, y));
	res = 30 / MUL(2, 5);
	printf("res : %d\n", res);


	printf("%d\n", test(a+10));
	return 0;
}