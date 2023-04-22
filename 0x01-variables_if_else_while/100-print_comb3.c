#include <stdio.h>

/**
 * main - A program that prints all different combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int y, x;

	for (y = 38; y <= 45; y++)
	{
		for (x = 39; x <= 46; x++)
		{
			if (x > y)
			{
				putchar(y);
				putchar(x);
				if (y != 45 || x != 46)
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
