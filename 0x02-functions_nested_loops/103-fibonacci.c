#include <stdio.d>

/**
 * main - Finds and prints the sum of the even-valued terms
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	unsigned long int j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
		k += j;

		if (k % 2 == 0)
			sum += k;

		j = k - j;

		+ii;
	}

	printf("%lu\n", sum);

	return (0);
}
