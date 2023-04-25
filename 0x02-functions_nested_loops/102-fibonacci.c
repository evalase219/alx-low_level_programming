#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers,
 * starting with 1 and 2
 * Return: Always 0
 */
int main(void)
{
	int x;
	unsigned long num1 = 0, num2 = 1, sum;

	for (x = 0; x < 50; x++)

	{
		sum = num1 + num2;
		printf("%lu", sum);

		num1 = num2;
		num2 = sum;

		if (x == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
