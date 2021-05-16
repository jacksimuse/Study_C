#include <stdio.h>

int main()
{
	int a, b;
	int sum, sub, mul, inv;

	a = 10;
	b = 20;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;

	printf("aÀÇ °ª : %d, bÀÇ °ª : %d\n", a, b);
	printf("µ¡¼À : %d\n", sum);
	printf("»¬¼À : %d\n", sub);
	printf("°ö¼À : %d\n", mul);
	printf("aÀÇ À½¼ö ¿¬»ê : %d\n", inv);

	return 0;
}