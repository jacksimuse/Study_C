/*
	�α��� ���α׷�
	1. id�� password�� �����ϰ� �����̸��� password.txt�� �����Ѵ�
	2. ����ü Login ������ id, password ����� ���� ������ ��Ű��
	3. Ű����� �ԷµǴ� id�� password�� ���Ͽ� "�α��εǾ����ϴ�."
	 �Ǵ� "id�� ã�� �� �����ϴ�."��� �޼����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct login
{
	char id[100];
	char password[100];
};

int main()
{
	// �����ų id�� ���
	FILE* fp;
	char id[] = "jh930306";
	char password[] = "wogns12";
	int  i,j;

	// �޸��忡 id�� ��� �Է��ϰ� �ݱ�
	fp = fopen("password.txt", "w");
	if (fp == NULL)
	{
		printf("������ ������ ���߽��ϴ�.\n");
		return 1;
	}

	i = 0, j = 0;
	while (id[i] != '\0')
	{
		fputc(id[i], fp);
		i++;
	}
	fputc(' ', fp);
	while (password[j] != '\0')
	{
		fputc(password[j], fp);
		j++;
	}
	fputc('\n', fp);
	fclose(fp);
	
	// �޸��� ���� �ҷ�����
	fp = fopen("password.txt", "r");
	if (fp == NULL)
	{
		printf("������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	// ����ü ���� ����
	struct login Login;

	int res; // fscanf �Լ��� ��ȯ�� ����
	while (1)
	{
		res = fscanf(fp, "%s%s", Login.id, Login.password); // Login.id, Login.password�� ������ �Է�
		if (res == EOF) break;// ������ �����͸� ��� ������ EOF ��ȯ
	}
	fclose(fp);

	char ch1[100];
	char ch2[100];
	char* str1[100];
	char* str2[100];

	while (1)
	{
		int ch = 0;
		 // Ű����� �� �Է¹���
		
		for  (i = 0; i < 100; i++)
		{
			scanf("%s", &ch1);
			str1[i] = (char*)malloc(strlen(ch1) + 1);
			strcpy(str1[i], ch1);
		}
		if (strcmp(str1, Login.id) != 0) ch += 1;
		
		if (ch == 0)
		{
			for (i = 0; i < 100; i++)
			{
				scanf("%s", &ch2);
				str2[i] = (char*)malloc(strlen(ch2) + 1);
				strcpy(str2[i], ch2);
			}
			if (strcmp(str2, Login.password) != 0) ch += 1;
			
			if (ch == 0)
			{
				printf("�α��� �Ǿ����ϴ�.\n");
				break;
			}
			else if (ch != 0)
			{
				printf("����� ã�� �� �����ϴ�.\n�ٽ� �Է��ϼ���.\n");
			}
		}
		else if (ch != 0)
		{
			printf("id�� ã�� �� �����ϴ�.\n�ٽ� �Է��ϼ���.\n");
		}

		for (i = 0; i < 100; i++)
		{
			free(str1[i]);
			free(str2[i]);
		}
	}
	return 0;
}

// �����Ҵ� �ٽ��ϱ�