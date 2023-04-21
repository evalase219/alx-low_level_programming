#include <stdio.h>

/**
 * main - A program that prints all different combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int y, x;

	for (y = 38; y <= 46; y++)
	{
		for (x = 39; x <= 47; x++)
		{
			if (x > y)
			{
				putchar(y);
				putchar(x);
				if (y != 46 || x != 47)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
