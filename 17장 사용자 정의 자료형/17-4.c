#include <stdio.h>

struct student // ����ü���� �޸𸮰� �Ҵ��� �ȵǼ� �ʱ�ȭ �ȵ�
{
	int id;
	char name[20];
	double grade;
};
// } s1 = { 315, "ȫ�浿", 2.4 }; ����� ���ÿ� �ʱ�ȭ ����

int main()
{
	struct student s1 = { 315, "ȫ�浿", 2.4 }, // ����ü ���� ����� �ʱ�ȭ  / �ѹ��� ������� ���� �Է��� ���� �ִ� ������ ����ߵ�
				   s2 = { 316, "�̼���", 3.7 },
				   s3 = { 317, "�������", 4.4 };

	struct student max;
	
	max = s1; // ����ü ������ �ѹ��� ��� ���� ������ �� ����
	if (s2.grade > max.grade) max = s2;
	if (s3.grade > max.grade) max = s3;

	printf("�й� : %d\n", max.id);
	printf("�̸� : %s\n", max.name);
	printf("���� : %.1lf\n", max.grade);

	return 0;
}