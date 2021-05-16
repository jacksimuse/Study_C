#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;

	scanf_s("%d", &a); // 여기서 변수 a에 값 입력
	printf("입력된 값 : %d\n", a); // 입력한 값 출력

	return 0;
}