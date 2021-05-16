#include <stdio.h>

int main()
{
	int a; // 자료형 변수 <- 변수선언  / 변수에 데이터 크기를 자료형으로 알려줌
	int b, c; // 동일한 자료형이면 열거가능
	double da;
	char ch;

	a = 10; // 대입 연산자 =을 기준으로 오른쪽을 왼쪽에 집어넣는다
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	/*printf("변수 a의 값 : %d\n", a);
	printf("변수 b의 값 : %d\n", b);
	printf("변수 c의 값 : %d\n", c);
	printf("변수 da의 값 : %.1lf\n", da);
	printf("변수 ch의 값 : %c\n", ch);*/

	printf("char 크기 : %d\n", sizeof(char)); // 1
	printf("short 크기 : %d\n", sizeof(short)); // 2
	printf("int 크기 : %d\n", sizeof(int)); // 4
	printf("long 크기 : %d\n", sizeof(long)); // 4
	printf("double 크기 : %d\n", sizeof(double)); // 8
	
	

	return 0;
}