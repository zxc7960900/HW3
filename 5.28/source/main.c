#include<stdio.h> 
#include<stdlib.h> 

int main(void)
{
	int x;
	char a, b;

	printf("�аݻݭn���@���ާ@(1)�j�g���p�g(2)�p�g���j�g�C\n");
	scanf("%d", &x);
	if (x == 1)
	{
		printf("�п�J���檺�r��\n");
		scanf(" %c", &a);
		b = a + 32;
		printf("%c �����p�g�� %c\n", a, b);
	}
	else if (x == 2)
	{
		printf("�A��J���檺�r��\n");
		scanf(" %c", &a);
		b = a - 32;
		printf("%c �����j�g�� %c\n", a, b);
	}
	else
		printf("�L���\��I");

	system("pause");
	return 0;
}