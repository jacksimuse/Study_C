#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct vision
{
	double left;
	double right;
};

struct vision exchange(struct vision robot); // 구조체 함수도 가능

int main()
{
	struct vision robot;

	printf("시력 입력 :");
	scanf("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("바뀐 시력 : %.lf %.1lf\n", robot.left, robot.right);

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