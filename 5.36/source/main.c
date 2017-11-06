#include<stdio.h>
#include<stdlib.h>

void hanoi(int, int, int, int);

int main(void)
{
	int i;

	printf("��1�ڬW�l:�_�I, ��2�ڬW�l:�Ȧs, ��3�ڬW�l:���I\n\n");
	printf("�`�@���h�ֶ�L�n�h: ");
	scanf_s("%d", &i);
	hanoi(i, 1, 2, 3);
	system("pause");
	return 0;
}

void hanoi(int i, int begin, int mid, int dest)
{
	if (i == 1)											//���j�פ����
		printf("%d �� %d\n", begin, dest);				//"�N�� %d �ӽL�l�q�� %d �Ӷ𲾨�� %d �Ӷ�\n",i, begin, dest
	else
	{
		hanoi(i - 1, begin, dest, mid);
		printf("%d �� %d \n", begin, dest);				//"�N�� %d �ӽL�l�q�� %d �Ӷ𲾨�� %d �Ӷ�\n",i, begin, dest
		hanoi(i - 1, mid, begin, dest);
	}
}