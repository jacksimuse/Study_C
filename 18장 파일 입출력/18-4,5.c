#include <stdio.h>

int main()
{
	int ch;

	while (1)
	{
		//ch = getchar();
		ch = fgetc(stdin); // Ű���忡�� ���� �Է�
		if (ch == EOF) // ctrl +z �� �Է� ����
		{
			break;
		}
		//putchar(ch);
		fputc(ch, stdout); // ȭ�鿡 ���� ���
	}

	return 0;
}