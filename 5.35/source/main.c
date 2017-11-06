#include<stdio.h>
#include<stdlib.h>

unsigned long long int Fibonacci(unsigned int b);

int main(void)
{
	unsigned long long int e1, e2, e3, d;
	unsigned int b;											//第b個
	unsigned int x = 1;

	printf("您要查詢第幾個Fibonacci級數(Max:94th): ");
	scanf_s("%u", &b);

	if (b == 1)
	{
		printf("\nFibonacci(1) = 0\n\n");
	}

	else if (b == 2)
	{
		printf("\nFibonacci(2) = 1\n\n");
	}

	else if (b == 0)
	{
		printf("輸入錯誤\n");
		system("pause");
		return 0;
	}

	else
	{
		printf("\nFibonacci(%u) = %llu\n\n", b, Fibonacci(b));
	}

	system("pause");

	e1 = 0;
	e2 = 1;
	printf("Fibonacci(1) = 0\n");
	printf("Fibonacci(2) = 1\n");

	while (x > 0)					//列出第1個到第c個
	{
		e3 = e1 + e2;

		printf("Fibonacci(%u) = %llu\n", x + 2, e3);
		if (e3 < e2)				//
		{
			printf("\n本系統所能印出之最大為 Fibonacci(%u) = %llu\n\n", x + 1, e2);
			break;
		}

		e1 = e2;
		e2 = e3;
		x++;
	}
	system("pause");
	return 0;
}

unsigned long long int Fibonacci(unsigned int b)
{
	unsigned long long int a1, a2, a3;					//a3,e3 = 結果
	int i;

	a1 = 0;
	a2 = 1;

	for (i = 3; i <= b; i++)
	{
		a3 = a1 + a2;
		a1 = a2;
		a2 = a3;

		if (i == b)
		{
			return a3;
		}
	}
}



