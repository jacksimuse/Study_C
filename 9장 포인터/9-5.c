#include <stdio.h>

int main()
{
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("%c\n", ch); // 2. 초기화 안된 쓰레기 값들이 들어있네
	printf("%d\n", in);
	printf("%.lf\n", db);

	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch)); // 1. &변수명(주소)에는 초기화 안된 4칸짜리 빈값이 들어있는듯?
	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
	printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));

	printf("char * 포인터의 크기 : %d\n", sizeof(pc)); // 3. 포인터명 = 가리키는 주소 / 그냥 주소 크기가 4인걸로
	printf("int * 포인터의 크기: %d\n", sizeof(in));
	printf("double * 포인터의 크기 : %d\n", sizeof(pd));

	printf("char * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc)); // *포인터명 = 가리키는 변수
	printf("int * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));
	printf("double * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pd));

}