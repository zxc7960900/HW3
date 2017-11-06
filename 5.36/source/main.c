#include<stdio.h>
#include<stdlib.h>

void hanoi(int, int, int, int);

int main(void)
{
	int i;

	printf("第1根柱子:起點, 第2根柱子:暫存, 第3根柱子:終點\n\n");
	printf("總共有多少圓盤要搬: ");
	scanf_s("%d", &i);
	hanoi(i, 1, 2, 3);
	system("pause");
	return 0;
}

void hanoi(int i, int begin, int mid, int dest)
{
	if (i == 1)											//遞迴終止條件
		printf("%d → %d\n", begin, dest);				//"將第 %d 個盤子從第 %d 個塔移到第 %d 個塔\n",i, begin, dest
	else
	{
		hanoi(i - 1, begin, dest, mid);
		printf("%d → %d \n", begin, dest);				//"將第 %d 個盤子從第 %d 個塔移到第 %d 個塔\n",i, begin, dest
		hanoi(i - 1, mid, begin, dest);
	}
}