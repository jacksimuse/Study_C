#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct vision
{
	double left;
	double right;
};

struct vision exchange(struct vision robot); // ����ü �Լ��� ����

int main()
{
	struct vision robot;

	printf("�÷� �Է� :");
	scanf("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("�ٲ� �÷� : %.lf %.1lf\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot)
{
	double temp;

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;
}