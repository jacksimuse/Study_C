#include <stdio.h>

int main()
{
	printf("apple�� ����� ���� �ּ� �� : %p\n", "apple"); // "apple"��ü�� �ּ��̹Ƿ� �ּ� ������& �ʿ� x
	printf("�� ��° ������ �ּ� �� : %p\n", "apple" + 1); // 1 2���� ���� ǥ����
	printf("ù ��° ���� : %c\n", *"apple");
	printf("�� ��° ���� : %c\n", *("apple" + 1)); 
	printf("�迭�� ǥ���� �� ��° ���� : %c\n", "apple"[2]); // 3 4 5���� ���� ǥ����

	return 0;
}