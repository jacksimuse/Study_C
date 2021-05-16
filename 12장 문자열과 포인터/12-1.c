#include <stdio.h>

int main()
{
	printf("apple이 저장된 시작 주소 값 : %p\n", "apple"); // "apple"자체가 주소이므로 주소 연산자& 필요 x
	printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1); // 1 2번줄 같은 표현식
	printf("첫 번째 문자 : %c\n", *"apple");
	printf("두 번째 문자 : %c\n", *("apple" + 1)); 
	printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]); // 3 4 5번줄 같은 표현식

	return 0;
}