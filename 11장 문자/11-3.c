#include <stdio.h>

int main()
{
	int ch; // �ƽ�Ű�ڵ�� �ޱ⶧���� int�� ����

	ch = getchar(); // ���� �Է�getchar / ���ڿ� �Է� gets
	printf("�Է��� ���� : ");
	putchar(ch); // ���� ��� putchar / ���ڿ� ��� puts
	putchar('\n');

	return 0;
}