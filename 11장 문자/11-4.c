#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch;
	int i;

	for (i = 0; i < 3; i++)
	{
		scanf("%c", &ch); // ���� ���鹮�� �ǹ��ڵ� �ԷµǴ°� ����ϱ�
		printf("%c", ch);
	}

	return 0;
}