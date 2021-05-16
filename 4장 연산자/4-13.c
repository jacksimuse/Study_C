#include <stdio.h>

int main()
{
	int  a = 10;
	int  b = 12;

	printf("a & b : %d\n", a & b);
	printf("a ^ b : %d\n", a ^ b);
	printf("a | b : %d\n", a | b);
	printf("~a : %d\n", ~a);
	printf("a << 1 : %d\n", a << 1);
	printf("a >> 2 : %d\n", a >> 2);

	// 오른쪽으로 이동할때 맨 왼쪽에 빈칸은 부호 값으로 처리됨

	char ch = 128; // 0b 1000 0000 MSB에 지금은 숫자 자리를 나타내는 1
	unsigned char ch1 = 128;
	printf("ch >> 1 : %d", ch >> 1); // 0b 1100 0000  MSB에 지금은 부호를 나타내는 값으로 1로 -를 표시
	printf("ch >> 1 : %d", ch1 >> 1); // 0b 0100 0000  MSB에 지금은 부호를 나타내는 값으로 0로 +를 표시

}