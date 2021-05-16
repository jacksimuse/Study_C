#include <stdio.h>

struct student // 구조체 선언 / 사용자가 만드는 자료형이다
{
	int num; // 구조체에는 멤버들이 있다
	double grade;
}; // 세미콜론 사용 구조체 닫기

int main()
{
	struct student s1; // 구조체의 변수 선언

	s1.num = 2; // 구조체 각 멤버들에게 값 저장
	s1.grade = 2.7;
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);

	return 0;
}