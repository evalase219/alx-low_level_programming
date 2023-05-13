#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - A function that checks in string if there are digit.
 * @str: pointer of the string to be checked.
 *
 * Return: Nothing
 */
int check_num(char *str)
{
	unsigned int x;

	x = 0;
	while (x < strlen(str))
	{
		if (!isdigit(str[x]))
		{
			return (0);
		}

		x++;
	}
	return (1);
}

/**
 * main - A program that adds positive numbers and prints the result.
 * @argc: number of argument to be added
 * @argv: value of argument to be added
 *
 * Return: Nothing
 */

int main(int argc, char *argv[])
{
	int x;
	int str_to_int;
	int add = 0;

	x = 1;
	while (x < argc)
	{
		if (check_num(argv[x]))
		{
			str_to_int = atoi(argv[x]);
			add += str_to_int;
		}

		else
		{
		printf("Error\n");
		return (1);
		}

		x++;
	}
	printf("%d\n", add);

	return (0);
}
