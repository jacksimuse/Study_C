#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char grade; // 학점을 입력할 변수
	char name[20]; // 이름을 입력할 배열

	printf("학점 입력 : ");
	scanf("%c", &grade); // grage 변수에 학점 문자 입력
	printf("이름 입력 : ");
	scanf("%s", name); // name 배열에 이름 문자열 입력, &를 사용하지않는다
	// 배열이 주소기 때문
	printf("%s의 학점은 %c입니다", name, grade); 

	//나이 주소50
	int age;
	char address[50];

	printf("이름 입력 :");
	scanf("%s", name);
	printf("나이 입력 :");
	scanf("%d", &age);
	printf("주소 입력 :");
	scanf("%s", address);

	printf("%s의 나이와 주소는 %d, %s입니다", name, age, address);
}