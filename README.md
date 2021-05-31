# Study-C
C 언어 공부

## C언어를 통한 Fitness 회원 관리 프로그램(평가)

- Fitness 회원관리 프로그램
신규회원 등록은 회원 번호와 이름, 체중을 입력하고 heap영역에 저장한다.
회원 번호로 음수를 입력하면 입력이 종료되며, 총 회원 수, 평균 체중, 최고 체중을 갖는 회원의 정보가 출력된다.

---
사용코드
```C
typedef struct {
	int num;
	char name[20];
	double weight;
} Fitness;
Fitness* ary[100];					// 포인터 배열 선언
void total_number(int count);				// 전체 등록 회원 수 반환
double average_weight(Fitness **pary, int count);	// 평균 체중 반환
int max_weight(Fitness **pary, int count);		// 최대 체중 회원의 index 반환
void print_info(Fitness **pary, int index);		// 회원 정보 출력
void free_ary(Fitness **pary, int count);		// 동적 할당 영역 해제
```
---
```C
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int num;
	char name[20];
	double weight;
} Fitness;

Fitness* ary[100];

void total_number(int count);
double average_weight(Fitness** pary, int count);
int max_weight(Fitness** pary, int count);
void print_info(Fitness** pary, int index);
void free_ary(Fitness** pary, int count);

int main()
{
	int max;
	double sum;

	for (int i = 0; i < sizeof(ary) / sizeof(ary[0]); i++)
	{
		ary[i] = (Fitness*)malloc(sizeof(Fitness));
	
		printf("회원 번호 : ");
		scanf(" %d", &ary[i]->num);
		if (ary[i]->num < 0)
		{
			if (i == 0)
			{
				printf("총 회원 수 : %d\n", i);
				printf("평균체중 : 0\n");
				printf("체중이 가장 무거운 회원은?\n");
				printf("회원 번호 : 없음\n");
				printf("이름 : 없음\n");
				printf("체중 : 없음\n");
			}
			else {
				total_number(i);
				sum = average_weight(ary, i);
				printf("평균체중 : %.2lf\n", sum / i);
				max = max_weight(ary, i);
				printf("체중이 가장 무거운 회원은?\n");
				print_info(ary, max);
				free_ary(ary, i);
			}
			break;
		}
		printf("이름 : ");
		scanf(" %s", &*ary[i]->name);
		printf("체중 : ");
		scanf(" %lf", &ary[i]->weight);
	}

	return 0;
}

void total_number(int count)
{
	printf("총 회원 수 : %d\n", count);
}

double average_weight(Fitness** pary, int count)
{
	double sum = 0;
	for (int i = 0; i < count; i++)
	{
		sum = sum + pary[i]->weight;
	}

	return sum;
}

int max_weight(Fitness** pary, int count)
{
	int idx_max;
	idx_max = pary[0]->num;
	for (int i = 1; i < count; i++)
	{
		if (pary[i]->weight > pary[i-1]->weight)
			idx_max = pary[i]->num;
	}
	return idx_max - 1;
}

void print_info(Fitness** pary, int index)
{
	printf("회원 번호 : %d\n", pary[index]->num);
	printf("이름 : %s\n", pary[index]->name);
	printf("체중 : %.2lf\n", pary[index]->weight);
}

void free_ary(Fitness** pary, int count)
{
	for (int i = 0; i < count; i++)
	{
		free(pary[i]);
	}
}
```
