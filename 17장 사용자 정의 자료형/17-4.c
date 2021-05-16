#include <stdio.h>

struct student // 구조체에는 메모리가 할당이 안되서 초기화 안됨
{
	int id;
	char name[20];
	double grade;
};
// } s1 = { 315, "홍길동", 2.4 }; 선언과 동시에 초기화 가능

int main()
{
	struct student s1 = { 315, "홍길동", 2.4 }, // 구조체 변수 선언과 초기화  / 한번에 멤버들의 값을 입력할 수도 있다 순서는 맞춰야됨
				   s2 = { 316, "이순신", 3.7 },
				   s3 = { 317, "세종대왕", 4.4 };

	struct student max;
	
	max = s1; // 구조체 변수에 한번에 모든 값을 저장할 수 있음
	if (s2.grade > max.grade) max = s2;
	if (s3.grade > max.grade) max = s3;

	printf("학번 : %d\n", max.id);
	printf("이름 : %s\n", max.name);
	printf("학점 : %.1lf\n", max.grade);

	return 0;
}