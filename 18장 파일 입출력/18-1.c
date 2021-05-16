#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp; // 파일 포인터

	fp = fopen("a.txt", "r"); // a.txt 파일을 읽기 전용으로 개방
	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다.\n");
		return 1;
	}
	printf("파일이 열렸습니다.\n");
	fclose(fp);

	return 0;
}

/*stream
입력(stdin) 출력(stdout) 에러(stderr)
*/