//5명의 사원 아이디, 사원이름, 한달 급여를 입력받아 출력한 뒤
//5명 사원의 급여 총액과 평균 급여액을 구하시오
//이름은 동적할당에 저장한다

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct employee {
	int id; // 사원번호
	char* name; // 사원이름
	int salary; // 급여
}Employee;

int main()
{
	int i;
	int temp = 0;
	Employee s1[5];
	char str[20];

	for (i = 0; i < 5; i++)
	{
		printf("사원 번호를 입력하세요 : ");
		scanf("%10d", &s1[i].id);

		printf("이름을 입력하세요 : ");
		scanf("%s", str);
		s1[i].name = (char*)malloc(strlen(str) + 1);

		printf("급여를 입력하세요 : ");
		scanf("%10d", &s1[i].salary);
		temp += s1[i].salary;
		printf("\n");
	}

	printf("사원정보\n");
	for (i = 0; i < 5; i++)
	{
		if (s1[i].name != NULL) strcpy(s1[i].name, str);
		printf("----- 사원번호 %d, 이름 %s, 급여 %d -----\n\n", s1[i].id, str, s1[i].salary);
	}
	printf("5명 사원의 급여 총액은 : %d\n평균 급여액은 : %.lf", temp, (double)temp / 5);

	for (i = 0; i < 5; i++)
	{
		free(s1[i].name);
	}

	return 0;
}