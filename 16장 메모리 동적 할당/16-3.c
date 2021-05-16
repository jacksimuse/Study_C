#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* pi; // 할당한 저장 공간을 연결할 포인터
	int size = 5; // 한 번에 할당할 저장 공간의 크기, int형 변수 5개씩
	int count = 0; // 현재 입력된 양수 개수
	int num, i; // 양수를 입력할 변수, 반복 제어 변수

	pi = (int*)calloc(size, sizeof(int)); // 5개의 저장 공간 할당 
	while (1)
	{
		printf("양수만 입력하세요 => ");
		scanf("%d", &num);
		if (num <= 0) break;
		if (count == size) // 저장 공간을 모두 사용하면
		{
			size += 5; // 크기를 5만큼 늘리고
			pi = (int*)realloc(pi, size * sizeof(int)); // 저장 공간 재할당 / realloc을 쓰기전에 데이터 영역이 없어서 NULL값이 들어갈 수도 있으니까
			// 백업받을 수 있는 변수를 만들어서 기존에 있던 데이터들을 담아두고 재할당을 하는걸 추천
		}
		pi[count++] = num;
	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}
	free(pi); // 공간 반납

	return 0;
}

// realloc을 쓸때 NULL값이 들어오는 경우에 대비하는 코드
// int pi_back; 백업 변수
// pi_back = pi 백업 변수에 기존 변수를 담아둔다
// if (pi == NULL) pi = pi_back  / pi가 NULL이 될때 pi에 pi_back을 다시 담아준다