#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp; // ���� ������

	fp = fopen("a.txt", "r"); // a.txt ������ �б� �������� ����
	if (fp == NULL)
	{
		printf("������ ������ �ʾҽ��ϴ�.\n");
		return 1;
	}
	printf("������ ���Ƚ��ϴ�.\n");
	fclose(fp);

	return 0;
}

/*stream
�Է�(stdin) ���(stdout) ����(stderr)
*/