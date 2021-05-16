#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	FILE* ifp, * ofp;
	char str[80];
	char* res;

	ifp = fopen("a.txt", "r"); // a.txt켜서 ifp에 담는다
	if (ifp == NULL)
	{
		printf("입력 파일을 열지 못했습니다.\n");
		return 1;
	}

	ofp = fopen("b.txt", "w");
	if (ofp == NULL)
	{
		printf("출력 파일을 열지 못했습니다.\n");
		return 1;
	}

	while (1)
	{
		res = fgets(str, sizeof(str), ifp); // str에 str크기 숫자만큼 ifp에서 받아서 res에 담는다
		if (res == NULL)
		{
			break;
		}
		str[strlen(str) - 1] = '\0'; // 개행 문자 제거
		fputs(str, ofp);
		fputs(" ", ofp);
	}

	fclose(ifp); // 입력 파일 닫기
	fclose(ofp); // 출력 파일 닫기

	return 0;
}