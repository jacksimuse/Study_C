#include <stdio.h>

int main(int argc, char* argv[])
{
	int i;
	printf("�Է� ���� : %d", argc);
	for (i = 0; i < argc; i++)
	{
		printf("%d��° �Էµ� �� : %s\n", i + 1, argv[i]);
	}
	return 0;
}