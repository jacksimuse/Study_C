#include <stdio.h>

int main()
{
	char* pary[5]; // pary��� �����ͺ����� �迭�� 5���� �ִ� �̸��̾�
	int i;

	pary[0] = "dog"; // 0��° ���� ù��° �ּҸ� ����������
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]); // �迭 ��Ҹ� ����Ͽ� ��� ���ڿ� ���
	}

	return 0;
}