#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile // profile이라는 구조체 만들기
{
	char name[20]; // 그안에서 쓸 멤버
	int age;
	double height;
	char* intro;
};

int main()
{
	struct profile yuni; // 구조체 변수

	strcpy(yuni.name, "서하윤"); // name  배열 멤버에 이름 복사
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.intro = (char*)malloc(80);
	printf("자기소개 : ");
	gets(yuni.intro);

	printf("이름 : %s\n", yuni.name);
	printf("나이 : %d\n", yuni.age);
	printf("키 : %.1lf\n", yuni.height);
	printf("자기소개 : %s\n", yuni.intro);
	free(yuni.intro);

	return 0;
}