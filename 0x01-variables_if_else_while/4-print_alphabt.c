#include <stdio.h>

/**
 * main - A program that prints alphabet in lowercase except q and e
 * Return: Always 0
 */
int main(void)
{
	char lb;

	for (lb = 'a'; lb <= 'z'; lb++)
	{
		if (lb != 'e' && lb != 'q')
			putchar(lb);
	}

	putchar('\n');

	return (0);
}
