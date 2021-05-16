#include <stdio.h>

int main()
{
	int a = 10, b = 5;
	int res;

	res = a / b * 2;
	printf("res = %d\n", res); // 우선순위가 같아서 앞에서 차례대로 계산
	res = ++a * 3;
	printf("res = %d\n", res); // 우선순위가 곱하기부터 
	res = a > b && a != 5;
	printf("res = %d\n", res); 
	res = a % 3 == 0;
	printf("res = %d\n", res); // 결과값이 틀려서 0
}