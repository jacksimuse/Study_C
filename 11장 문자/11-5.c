#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int res;
	char ch;

	while (1)
	{
		res = scanf("%c", &ch); // 문자 입력, ctrl + z 누르면 -1반환
		if (res == -1) break; // 반환값이 -1이면 반복 종료
		printf("%d ", ch); // 입력받은 문자의 아스키 코드 값 출력
	}

	return 0;
}