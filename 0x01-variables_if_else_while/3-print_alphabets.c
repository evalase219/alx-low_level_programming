#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase and uppercase
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		putchar(la);

	for (la = 'A'; la <= 'Z'; la++)
		putchar(la);

	putchar('\n');

	return (0);
}
