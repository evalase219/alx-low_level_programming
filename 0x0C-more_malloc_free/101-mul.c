#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - A program that checks if a string contains non-digit character.
 * @s: string to be checked.
 *
 * Return: return 0 if non-digit is found otherwise 1.
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - A program that returns the length of the string.
 * @s: string to return
 *
 * Return: return the length of the string.
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * errors - A program that handles errors for main.
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - A program that multiplies two positive numbers.
 * @argc: number of argument
 * @argv: value of argument
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	  char *s1, *s2;
	  int l1, l2, l, x, multi, d1, d2, *output, y = 0;

	  s1 = argv[1], s2 = argv[2];
	  if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		  errors();
	  l1 = _strlen(s1);
	  l2 = _strlen(s2);
	  l = l1 + l2 + 1;
	  output = malloc(sizeof(int) * l);

	  if (!output)
		  return (1);
	  for (x = 0; x <= l1 + l2; x++)
		  output[x] = 0;

	  for (l1 = l1 - 1; l1 >= 0; l1--)
	  {
		  d1 = s1[l1] - '0';
		  multi = 0;

		  for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		  {
			  d2 = s2[l2] - '0';
			  multi += output[l1 + l2 + 1] + (d1 * d2);
			  output[l1 + l2 + 1] = multi % 10;

			  multi /= 10;
		  }
		  if (multi > 0)
			  output[l1 + l2 + 1] += multi;
	  }

	  for (x = 0; x < l - 1; x++)
	  {
		  if (output[x])
			  y = 1;
		  if (y)
			  _putchar(output[x] + '0');
	  }
	  if (!y)
		  _putchar('0');

	  _putchar('\n');
	  free(output);

	  return (0);
}
