#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//char grade; // 학점을 입력할 변수
	//char name[20]; // 이름을 입력할 배열

	//printf("학점 입력 : ");
	//scanf("%c", &grade); // grage 변수에 학점 문자 입력
	//printf("이름 입력 : ");
	//scanf("%s", name); // name 배열에 이름 문자열 입력, &를 사용하지않는다
	//// 배열이 주소기 때문
	//printf("%s의 학점은 %c입니다", name, grade); 

	// 이름20 나이 주소50
	//char name[20];
	//int age;
	//char address[1000];

	//printf("이름 입력 :");
	//scanf("%s", name);
	//printf("나이 입력 :");
	//scanf("%d", &age);
	//printf("주소 입력 :");
	//scanf("%s", address);

	//printf("%s의 나이와 주소는 %d, %s입니다", name, age, address);

	int a;
	char b;
	printf("정수하나를 입력하세요 : ");
	scanf("%d", &a);
	getchar(); // 3. 안띄어줄거면 이거를 넣어준다
	printf("문자 하나를 입력하세요 : "); // 1. 정수 다음 문자를 scanf로 받을때 엔터를 문자로 인식하기떄문에
	scanf(" %c", &b); // 2. %c앞에 한칸 띄어준다
	printf("입력된 값은 %d, %c 입니다.\n", a, b);

	return 0;

}