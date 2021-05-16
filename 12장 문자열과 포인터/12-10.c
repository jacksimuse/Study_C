#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[80] = "straw";

	strcat(str, "berry"); // strcat(앞글자, "뒷글자") 이어붙이기
	printf("% s\n", str);
	strncat(str, "piece", 3); // strncat(앞글자, "뒷글자", 뒷글자중 몇개) 만 붙이겠다는 마인드
	printf("%s\n", str);

	return 0;
}