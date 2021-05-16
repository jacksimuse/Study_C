#include <stdio.h>

int main()
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p; // double pd와 int p는 자료형이 같지않은데 주소만 담는거임
	printf("%lf\n", *pd); // 그래서 할당되지않은 값들이 있어서 아무렇게 나옴 나오긴 나옴 

	return 0;
}