#include <stdio.h>

int main()
{
	printf("%d\n", 10);
	printf("%lf\n", 3.4); // %lf위치에 3.4를 소수점 이하 6자리까지 출력
	printf("%.1lf\n", 3.45); // 소수점 첫째자리까지 출력 자동 반올림
	printf("%.10lf\n", 3.4); // 소수점 10째자리까지

	printf("%d와 %d의 합은 %d입니다\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	return 0;
}