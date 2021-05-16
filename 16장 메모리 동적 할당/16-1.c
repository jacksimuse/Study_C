#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* pi;
	double* pd;
	// 메모리 동적 할당 후 포인터 연결
	pi = (int*)malloc(sizeof(int)); // (int *)생략 가능 / 출력을 적어서 알려주는게 좋다
	if (pi == NULL)
	{
		printf("# 메모리가 부족합니다. \n");
		exit(1);
	}
	pd = (double*)malloc(sizeof(double));

	*pi = 10;
	*pd = 3.4;

	printf("정수형으로 사용 : %d\n", *pi);
	printf("실수형으로 사용 : %.1lf\n", *pd);

	free(pi); // 동적 할당 영역 반환 malloc과 free는 짝 / new와  delete 짝 생성자 소멸자
	free(pd);

	return 0;
}