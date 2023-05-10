#include "main.h"

int check_pal(char *s, int x, int lgth);
int _strlen_recursion(char *s);

/**
 * is_palindrome - A function that checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: return 1 if the string is a palindrome
 * and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - A function that returns the length of the string.
 * @s: The length of the string to be calculated.
 *
 * Return: return the string length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - A function that checks that characters recursively
 * for palindrome.
 * @s: The string to be checked.
 * @x: iterator
 * @lgth: length of the string.
 *
 * Return: return 1 if the string is a palindrome and 0 if not.
 */
int check_pal(char *s, int x, int lgth)
{
	if (*(s + x) != *(s + lgth - 1))
		return (0);

	if (x >= lgth)
		return (1);

	return (check_pal(s, x + 1, lgth - 1));
}
