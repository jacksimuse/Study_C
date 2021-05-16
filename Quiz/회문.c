//맨 앞 글자랑 맨 뒤랑 비교 그다음 두번째끼리 비교 ... 가운데끼리 비교 

//문자를 입력받는다
//문자 길이 반만큼 반복한다 / 홀수면 가운데는 같은문자로 친다
//문자 첫번째와 마지막을 비교한다 / 그 두번째끼리 비교한다
// 비교 값을 받아서 회문인지 아닌지 판단한다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char ch[100] = { 0 };
	
	int i;
	int res = 0;

	printf("글자를 입력하세요 : ");
	scanf("%s", &ch);

	int count = strlen(ch);
	printf("%d %s\n", count, ch);

	for (i = 0; i < count / 2; i++)
	{
		if (ch[i] != ch[count - i - 1])
			res += 1;
	}
	if (res == 0) printf("회문입니다 \n");
	else printf("회문이 아닙니다 \n");

	return 0;
}