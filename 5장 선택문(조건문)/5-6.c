#include <stdio.h>

int main()
{
	int rank = 2, m = 6;

	switch (rank)	// rank의 값이 얼마인지 확인
	{
	case 1:			// rank가 1이면
		m = 300;	// m = 300을 수행
		break;		// switch문 밖으로 나감
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}

	printf("m : %d\n", m);

	return 0;
}