#include <stdio.h>

union student // ����ü�� ������ ũ�Ⱑ �� ū�Ÿ� �Ҵ� �޾Ƽ� ������
{
	int num;
	double grade;
};

struct student1
{
	int num;
	double grade;
};

int main()
{
	union student s1 = { 3.14 }; // ����ü ������ ����� �ʱ�ȭ
	struct student1 s2;
	printf("%lf\n", s1.grade);
	printf("�й� : %d\n", s1.num);
	s1.grade = 4.4;
	printf("���� : %.1lf\n", s1.grade);
	printf("�й� : %d\n", s1.num); // �й��� �ʱ갪�� ���� ����� ���ؼ� �ٲ� / �ٽ� ����� s1.num = ��; ���� ���� �־���ߵ�

	printf("%d\n", sizeof(s1)); // ����ü ũ�� 8
	printf("%d\n", sizeof(s2)); // ����ü ũ�� 16 / int 4 �е� 4 double 8 
	return 0;
}