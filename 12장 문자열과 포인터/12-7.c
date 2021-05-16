#include <stdio.h>

int main()
{
	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);
	fputs(ps, stdout); // file stringÀ» ½áÁà¾ßµÊ
	puts("milk");

	return 0;
}