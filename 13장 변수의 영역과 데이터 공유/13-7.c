#include <stdio.h>

void add_ten(int* pa);

int main()
{
	int a = 10;

	add_ten(&a); // �Լ��� �ּҸ� �ش�
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int* pa) // �����ͷ� �ּҸ� �޴´�
{
	*pa = *pa + 10;
}