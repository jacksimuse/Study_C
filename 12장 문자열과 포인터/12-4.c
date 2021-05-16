#include <stdio.h>

int main()
{
	char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	gets(str); // gets은 버퍼에 저장된 모든 문자를 가져오지만 개행문자는 널 문자로 바꿔 저장
	printf("입력한 문자열은 %s입니다.", str); 

	return 0;
}
