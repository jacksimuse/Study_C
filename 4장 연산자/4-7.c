#include <stdio.h>

int main()
{
	int a = 10, b = 20, res;

	a + b; // 연산 결과는 버려짐
	printf("%d + %d = %d\n", a, b, a + b); // 여기서 바로 계산

	res = a + b; // 연산 결과를 저장
	printf("%d + %d = %d\n", a, b, res); // 결과 값들을 불러옴

	return 0;
}