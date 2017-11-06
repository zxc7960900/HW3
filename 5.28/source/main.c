#include<stdio.h> 
#include<stdlib.h> 

int main(void)
{
	int x;
	char a, b;

	printf("請問需要哪一項操作(1)大寫換小寫(2)小寫換大寫。\n");
	scanf("%d", &x);
	if (x == 1)
	{
		printf("請輸入執行的字母\n");
		scanf(" %c", &a);
		b = a + 32;
		printf("%c 換成小寫為 %c\n", a, b);
	}
	else if (x == 2)
	{
		printf("再輸入執行的字母\n");
		scanf(" %c", &a);
		b = a - 32;
		printf("%c 換成大寫為 %c\n", a, b);
	}
	else
		printf("無此功能！");

	system("pause");
	return 0;
}