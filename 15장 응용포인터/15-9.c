#include <stdio.h>

int main()
{ // 필요한 데이터값을 유동적으로 담을때 void pointer를 사용
	int a = 10;
	double b = 3.5;
	void* vp; 

	vp = &a; 
	printf("a : %d\n", *(int*)vp);

	vp = &b;
	printf("b : %.1lf\n", *(double*)vp);

	return 0;
}