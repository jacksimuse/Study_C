#include <stdio.h>

struct list
{
	int num;
	struct list* next; // 자기 참조 / 자신을 가리키는 포인터 멤버
};

int main()
{
	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };

	struct list* head = &a, * current;

	a.next = &b;
	b.next = &c;

	printf("head->num : %d\n", head->num);
	printf("head->next->num : %d\n", head->next->num);

	printf("list all :");
	current = head;
	while (current != NULL)
	{
		printf("%d ", current->num);
		current = current->next;
	}
	printf("\n");

	return 0;
}