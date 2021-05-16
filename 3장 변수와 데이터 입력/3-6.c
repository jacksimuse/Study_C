#include <stdio.h>

int main()
{
	// 배열 = 주소 <- 이때 상수처리가 됨 그래서 대입연산자(=)를 사용 못함
	// 배열명[문자열 길이 + 1이상] ? -> \0(널문자)를 컴파일러가 자동으로 추가하기 때문

	char fruit[20] = "strawberry"; // char 배열 선언과 문자열 초기화

	printf("딸기 : %s\n", fruit); // 배열명으로 저장된 문자열 출력
	printf("딸기쨈 : %s %s\n", fruit, "jam"); // 문자열 상수를 직접 %s로 출력

	return 0;
}