#include <stdio.h>

int main()
{
	float ft = 1.234567890123456789; // 유효 숫자가 많은 값으로 초기화
	double db = 1.234567890123456789;

	// 소수점 이하 20자리까지 출력
	printf("float형 변수의 값 : %.20f\n", ft); // 유효 숫자 7자까지
	printf("double형 변수의 값 : %.20lf\n", db); // 유효 숫자 15자까지

	return 0;
}