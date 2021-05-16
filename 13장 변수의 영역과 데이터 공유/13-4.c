#include <stdio.h>

void auto_func();
void static_func();

int main()
{
	int i;

	printf("�Ϲ� ���� ����(auto�� ����� �Լ�...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func(); // 1. �Լ� ȣ�� / 5. �ݺ����� ���� �� ȣ�� // 7. �ᱹ 1�� 3�� ���
	}

	printf("���� ���� ����(static)�� ����� �Լ�...\n");
	for (i = 0; i < 3; i++)
	{
		static_func(); // 1. �Լ� ȣ�� / 5. �ݺ����� ���� �� ȣ�� / 9. ��� 3 ���
	}

	return 0;
}

void auto_func()
{
	auto int a = 0; // 2. �������� a�� 0 �ʱ�ȭ  / 6. ���������� �� ���� ������

	a++; // 3. a = 1
	printf("%d\n", a); // 4. 1 ���
}

void static_func()
{
	// ���� + ���� ����� ���� static
	static int a; // 2. static�̶� �ڵ����� 0 �ʱ�ȭ / 6. static�̶� �����Ϳ� �������־ ��� �̾
	
	a++; // 3. a = 1 / 7. a = 1�� + 1 �߰�
	printf("%d\n", a); //  4. 1��� / 8. 2���
}

