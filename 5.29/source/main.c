#include <stdio.h> 
#include <stdlib.h> 

int main()
{
	int a, b, i, gcd, lcm;
	printf("Enter two positive integers:\n");
	scanf("%d", &a);
	scanf(" %d", &b);

	while ((a <= 0) || (b <= 0))
	{
		printf("Error!Please enter again!\n");
		scanf("%d", &a);
		scanf(" %d", &b);
	}

	for (i = 1; i <= a; i++)
	{
		if (a%i == 0)
		{
			if (b%i == 0)
				gcd = i;
		}
	}

	lcm = a*b / gcd;
	printf("(%d,%d)=%d\n", a, b, gcd);
	printf("[%d,%d]=%d\n", a, b, lcm);
	system("pause");
	return 0;
}