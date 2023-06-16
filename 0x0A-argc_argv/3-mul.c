#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _atoi - function that converts a string to an integer
 * @s: the string to be converted
 *
 * Return: return the converted integer
 */
int _atoi(char *s)
{
	int v, u, w, y, len, num;

	v = 0, u = 0, w = 0, y = 0, len = 0, num = 0;

	while (s[len] != '\0')
		len++;
	while (v < len && y == 0)
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
 * main - A program that multiplies two numbers.
 * @argc: arguments count
 * @argv: value of argument
 *
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
