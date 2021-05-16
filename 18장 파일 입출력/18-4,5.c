#include <stdio.h>

int main()
{
	int ch;

	while (1)
	{
		//ch = getchar();
		ch = fgetc(stdin); // 키보드에서 문자 입력
		if (ch == EOF) // ctrl +z 로 입력 종료
		{
			break;
		}
		//putchar(ch);
		fputc(ch, stdout); // 화면에 문자 출력
	}

	return 0;
}