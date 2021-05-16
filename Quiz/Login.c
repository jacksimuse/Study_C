/*
	로그인 프로그램
	1. id와 password를 저장하고 파일이름은 password.txt로 저장한다
	2. 구조체 Login 변수에 id, password 멤버에 각각 저장을 시키고
	3. 키보드로 입력되는 id와 password를 비교하여 "로그인되었습니다."
	 또는 "id를 찾을 수 없습니다."라는 메세지를 출력하는 프로그램을 작성하시오
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
	// 저장시킬 id와 비번
	FILE* fp;
	char id[] = "jh930306";
	char password[] = "wogns12";
	int  i,j;

	// 메모장에 id와 비번 입력하고 닫기
	fp = fopen("password.txt", "w");
	if (fp == NULL)
	{
		printf("파일을 만들지 못했습니다.\n");
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
	
	// 메모장 내용 불러오기
	fp = fopen("password.txt", "r");
	if (fp == NULL)
	{
		printf("파일을 열지 못했습니다.\n");
		return 1;
	}

	// 구조체 변수 선언
	struct login Login;

	int res; // fscanf 함수의 반환값 저장
	while (1)
	{
		res = fscanf(fp, "%s%s", Login.id, Login.password); // Login.id, Login.password에 데이터 입력
		if (res == EOF) break;// 파일의 데이터를 모두 읽으면 EOF 반환
	}
	fclose(fp);

	char ch1[100];
	char ch2[100];
	char* str1[100];
	char* str2[100];

	while (1)
	{
		int ch = 0;
		 // 키보드로 값 입력받음
		
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
				printf("로그인 되었습니다.\n");
				break;
			}
			else if (ch != 0)
			{
				printf("비번을 찾을 수 없습니다.\n다시 입력하세요.\n");
			}
		}
		else if (ch != 0)
		{
			printf("id를 찾을 수 없습니다.\n다시 입력하세요.\n");
		}

		for (i = 0; i < 100; i++)
		{
			free(str1[i]);
			free(str2[i]);
		}
	}
	return 0;
}

// 동적할당 다시하기