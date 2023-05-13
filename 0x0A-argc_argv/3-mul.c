#include <stdio.h>
#include "main.h"

/**
 * _atoi - A function that converts a string to an integer
 * @s: the string to be converted.
 *
 * Return: return the converted int
 */
int _atoi(char *s)
{
	int v, u, w, lgth, y, num;

	v = 0;
	u = 0;
	w = 0;
	lgth = 0;
	y = 0;
	num = 0;

	while (s[lgth] != '\0')
		lgth++;

	while (v < lgth && y == 0)
	{
		if (s[v] == '-')
			++u;

		if (s[v] >= '0' && s[v] <= '9')
		{
			num = s[v] - '0';
			if (u % 2)
				num = -num;
			w = w * 10 + num;
			y = 1;
			if (s[v + 1] < '0' || s[v + 1] > '9')
				break;
			y = 0;
		}
		v++;
	}
	if (y == 0)
		return (0);

	return (w);
}

/**
 * main - A program that multiplies two numbers
 * @argc: number of argument to be multiplied.
 * @argv: value of argument to be multiplied.
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int output, digit1, digit2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	digit1 = _atoi(argv[1]);
	digit2 = _atoi(argv[2]);
	output = digit1 * digit2;

	printf("%d\n", output);
	return (0);
}
