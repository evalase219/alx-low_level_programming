#include <stdio.h>

/**
 * main - A program that prints all different combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int x, y;

	for (x = 38; x <= 46; x++)
	{
		for (y = 39; y <= 47; y++)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x != 46 || y != 47)
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
