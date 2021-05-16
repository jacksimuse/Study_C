#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[20] = "mango tree";

	strncpy(str, "apple-pie", 5); // str에 "글자"에서 숫자만큼 바꾸겠다
	str[5] = '\0'; // 글자가 끝나고 널 문자를 추가하면 문장을 끝내버림 / 출력 값 apple

	printf("%s\n", str);

	return 0;
}