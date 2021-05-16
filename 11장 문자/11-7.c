#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int num, grade;

	// ver1 / 개념 : 10 엔터 a 엔터
	printf("학번 입력 : "); 
	scanf("%d", &num); // 10을 받아온다
	getchar(); // 엔터가 문자라서 받아온다 / 날리기위해서 그냥 getchar써준거임
	printf("학점 입력 : "); 
	grade = getchar(); // a 를 받는다
	printf("학번 : %d, 학점 : %c", num, grade); // 결과 : 10과 a를 받는다


	// ver2 / 개념 : a 엔터 10 엔터
	printf("학점 입력 : "); 
	grade = getchar(); // a를 받아옴
	printf("학번 입력 : ");
	scanf("%d", &num); // 숫자만 받는거라서 엔터 안받고 10 받아옴
	//getchar();
	printf("학번 : %d, 학점 : %c", num, grade); // 결과 : 10과 a를 받는다

	return 0;
}