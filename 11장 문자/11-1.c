#include <stdio.h>

int main()
{
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z'))
	{
		small = cap + ('a' - 65);
	}
	printf("�빮�� : %c %c", cap, '\n'); // \n�� ���ڷ� ��°��� ->�ٹٲ� ����
	printf("�ҹ���  : %c", small);

	return 0;
}