#include <stdio.h>

int main()
{
	int ch; // 아스키코드로 받기때문에 int로 선언

	ch = getchar(); // 문자 입력getchar / 문자열 입력 gets
	printf("입력한 문자 : ");
	putchar(ch); // 문자 출력 putchar / 문자열 출력 puts
	putchar('\n');

	return 0;
}