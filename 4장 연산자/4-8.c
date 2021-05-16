#include <stdio.h>

int main()
{ // ** 형변환은 = 왼쪽에서 불가능
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b); //(double)을 사용해 a와 b의 실수로 변환 
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 : %.1lf\n", res);

	a = (int)res;
	printf("(int) %.1lf의 결과 : %d\n", res, a); // (int)를 이용해 res값에서 정수만 출력

	return 0;
}