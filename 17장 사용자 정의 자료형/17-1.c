#include <stdio.h>

struct student // ����ü ���� / ����ڰ� ����� �ڷ����̴�
{
	int num; // ����ü���� ������� �ִ�
	double grade;
}; // �����ݷ� ��� ����ü �ݱ�

int main()
{
	struct student s1; // ����ü�� ���� ����

	s1.num = 2; // ����ü �� ����鿡�� �� ����
	s1.grade = 2.7;
	printf("�й� : %d\n", s1.num);
	printf("���� : %.1lf\n", s1.grade);

	return 0;
}