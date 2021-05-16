#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	

	int a;
	char b;
	printf("정수하나를 입력하세요 : ");
	scanf("%d", &a);
	getchar(); // 3. 안띄어줄거면 이거를 넣어준다
	printf("문자 하나를 입력하세요 : "); // 1. 정수 다음 문자를 scanf로 받을때 엔터를 문자로 인식하기떄문에
	scanf(" %c", &b); // 2. %c앞에 한칸 띄어준다
	printf("입력된 값은 %d, %c 입니다.\n", a, b);

	return 0;

}