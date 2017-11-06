#include<stdio.h>
#include<stdlib.h>

int integerPower(int base, int exponent);

int main(void)
{
	int num;
	int power;

	printf("Enter a integer:");
	scanf_s("%d", &num);
	printf("Its' power:");
	scanf_s("%d", &power);

	printf("%d to the %dth power is %d\n\n", num, power, integerPower(num, power));

	system("pause");
	return 0;
}

int integerPower(int base, int exponent)
{
	if (exponent != 1)
	{
		return base = base*integerPower(base, exponent - 1);
	}
	else
	{
		return base;
	}
}