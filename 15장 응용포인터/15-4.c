#include <stdio.h>

int main()
{
	int ary[5];

	printf("  ary�� �� : %u\t", ary); // �ּҷμ��� �迭���� ��
	printf("ary�� �ּ� : %u\n", &ary); // �迭�� �ּ�
	printf("  ary + 1 : %u\t", ary + 1); // �� ��ĭ ���� int�� 4
	printf("  &ary + 1 : %u\n", &ary + 1); // �ּ� ��ü�� ���� 4 x 5 = 20����

	return 0;
}