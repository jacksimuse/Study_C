#include <stdio.h>

union student // 공용체는 데이터 크기가 젤 큰거를 할당 받아서 공유함
{
	int num;
	double grade;
};

struct student1
{
	int num;
	double grade;
};

int main()
{
	union student s1 = { 3.14 }; // 공용체 변수의 선언과 초기화
	struct student1 s2;
	printf("%lf\n", s1.grade);
	printf("학번 : %d\n", s1.num);
	s1.grade = 4.4;
	printf("학점 : %.1lf\n", s1.grade);
	printf("학번 : %d\n", s1.num); // 학번의 초깃값이 학점 멤버에 의해서 바뀜 / 다시 쓸라면 s1.num = 값; 으로 값을 넣어줘야됨

	printf("%d\n", sizeof(s1)); // 공용체 크기 8
	printf("%d\n", sizeof(s2)); // 구조체 크기 16 / int 4 패딩 4 double 8 
	return 0;
}