#include <stdio.h>

int main()
{
	int a = 10, b = 20;
	const int* pa = &a; // 포인터 pa는 변수 a를 가리킨다

	printf("변수  a 값 : %d\n", *pa); // pa를 통해 a를 출력
	pa = &b;						 // pa에 다시 b를 가리키게함
	printf("변수 b 값 : %d\n", *pa); // pa를 통해 b를 출력
	pa = &a;						 // pa에 다시 a를 가리키게함
	a = 20;							 // a에 20 대입
	printf("변수 a 값 : %d\n", *pa); // pa를 통해 a를 출력

	return 0;
}