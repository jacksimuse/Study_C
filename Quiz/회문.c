//�� �� ���ڶ� �� �ڶ� �� �״��� �ι�°���� �� ... ������� �� 

//���ڸ� �Է¹޴´�
//���� ���� �ݸ�ŭ �ݺ��Ѵ� / Ȧ���� ����� �������ڷ� ģ��
//���� ù��°�� �������� ���Ѵ� / �� �ι�°���� ���Ѵ�
// �� ���� �޾Ƽ� ȸ������ �ƴ��� �Ǵ��Ѵ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char ch[100] = { 0 };
	
	int i;
	int res = 0;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%s", &ch);

	int count = strlen(ch);
	printf("%d %s\n", count, ch);

	for (i = 0; i < count / 2; i++)
	{
		if (ch[i] != ch[count - i - 1])
			res += 1;
	}
	if (res == 0) printf("ȸ���Դϴ� \n");
	else printf("ȸ���� �ƴմϴ� \n");

	return 0;
}