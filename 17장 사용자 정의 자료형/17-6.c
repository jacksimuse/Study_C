#include <stdio.h>

struct score
{
	int kor;
	int eng;
	int math;
};

int main()
{
	struct score yuni = { 90, 80, 70 };
	struct score* ps = &yuni; // �����Ϳ� �ּ� ����

	printf("���� : %d\n", (*ps).kor); // ����ü �����ͷ� ��� ����  / ->�� ()�� ����
	printf("���� : %d\n", ps -> eng); // -> ������ ���
	printf("���� : %d\n", ps -> math);

	return 0;
}