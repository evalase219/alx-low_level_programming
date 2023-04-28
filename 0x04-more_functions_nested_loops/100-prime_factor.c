#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Always 0
 */
int main(void)
{
	long x = 612852475143, y;

	while (y < (x / 2))
	{
		if ((x % 2) == 0)
		{
			x /= 2;
				continue;
		}

		for (y = 3; y < (x / 2); y += 2)
		{
			if ((x % y) == 0)
				x /= y;
		}
	}
	printf("%ld\n", x);

	return (0);
}
