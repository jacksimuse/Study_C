#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp;
	int ary[10] = { 13,10,13,13,10,26,13,10,13,10 };
	int i, res;

	fp = fopen("a.txt", "wb"); // 바이너리 파일로 개방
	for (i = 0; i < 10; i++)
	{
		fputc(ary[i], fp); // 배열 요소의 각 값에 해당하는 아스키 문자 출력
	}
	fclose(fp);

	fp = fopen("a.txt", "rt"); // 같은 파일을 텍스트 파일로 개방
	while (1)
	{
		res = fgetc(fp);
		if (res == EOF) break;
		printf("%4d", res);
	}
	fclose(fp);

	return 0;
}