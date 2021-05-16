#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	FILE* ifp, * ofp;
	char str[80];
	char* res;

	ifp = fopen("a.txt", "r"); // a.txt�Ѽ� ifp�� ��´�
	if (ifp == NULL)
	{
		printf("�Է� ������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	ofp = fopen("b.txt", "w");
	if (ofp == NULL)
	{
		printf("��� ������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	while (1)
	{
		res = fgets(str, sizeof(str), ifp); // str�� strũ�� ���ڸ�ŭ ifp���� �޾Ƽ� res�� ��´�
		if (res == NULL)
		{
			break;
		}
		str[strlen(str) - 1] = '\0'; // ���� ���� ����
		fputs(str, ofp);
		fputs(" ", ofp);
	}

	fclose(ifp); // �Է� ���� �ݱ�
	fclose(ofp); // ��� ���� �ݱ�

	return 0;
}