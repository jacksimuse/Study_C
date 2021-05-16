#include <stdio.h>

int main()
{
	char* pary[5]; // pary라는 포인터변수가 배열로 5개가 있다 이말이야
	int i;

	pary[0] = "dog"; // 0번째 방의 첫번째 주소를 가지고있음
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]); // 배열 요소를 사용하여 모든 문자열 출력
	}

	return 0;
}