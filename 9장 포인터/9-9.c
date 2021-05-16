#include <stdio.h>

void swap(int x, int y);

int main()
{
	int a = 10, b = 20;

	swap(a, b); // 3. swap함수를 쓰긴하지만 다시 입력을 a, b를 사용
	printf("a:%d, b:%d\n", a, b); // 4. a와 b가 결국 출력되었다는 내용

	return 0;
}

void swap(int x, int y) // 1. a와 b의 값을 복사해서 x, y로 받지만
{
	int temp; 

	temp = x;
	x = y;
	y = temp;  //  2. 지들끼리 교환하고 다함
}