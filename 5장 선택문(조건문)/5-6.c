#include <stdio.h>

int main()
{
	int rank = 2, m = 6;

	switch (rank)	// rank�� ���� ������ Ȯ��
	{
	case 1:			// rank�� 1�̸�
		m = 300;	// m = 300�� ����
		break;		// switch�� ������ ����
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}

	printf("m : %d\n", m);

	return 0;
}