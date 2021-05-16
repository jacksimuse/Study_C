#include <stdio.h>

void auto_func();
void static_func();

int main()
{
	int i;

	printf("일반 지역 변수(auto를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func(); // 1. 함수 호출 / 5. 반복문에 의해 또 호출 // 7. 결국 1만 3번 출력
	}

	printf("정적 지역 변수(static)를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		static_func(); // 1. 함수 호출 / 5. 반복문에 의해 또 호출 / 9. 결론 3 출력
	}

	return 0;
}

void auto_func()
{
	auto int a = 0; // 2. 지역변수 a에 0 초기화  / 6. 지역변수라서 또 새로 시작함

	a++; // 3. a = 1
	printf("%d\n", a); // 4. 1 출력
}

void static_func()
{
	// 지역 + 전역 기능을 가진 static
	static int a; // 2. static이라서 자동으로 0 초기화 / 6. static이라 데이터에 고정되있어서 계속 이어감
	
	a++; // 3. a = 1 / 7. a = 1에 + 1 추가
	printf("%d\n", a); //  4. 1출력 / 8. 2출력
}

