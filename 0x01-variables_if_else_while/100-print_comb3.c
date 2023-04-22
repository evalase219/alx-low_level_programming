#include <stdio.h>

/**
 * main - A program that prints all different combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int y, x;

	for (y = 48; y <= 56; y++)
	{
		for (x = 49; x <= 57; x++)
		{
			if (x > y)
			{
				putchar(y);
				putchar(x);
				if (y != 49 || x != 57)
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
