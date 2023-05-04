#include "main.h"

/**
 * leet - A function that encodes a string into 1337
 * @s: The string to be inputted.
 *
 * Return: returns the changed string s.
 */
char *leet(char *s)
{
	int x = 0, y;
	char m[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {'A', 'E', 'O', 'T', 'L'};
	int numbers[] = {'4', '3', '0', '7', '1'};

	while (*(s + x) != '\0')
	{
		for (y = 0; y < 5; y++)
		{
			if (*(s + x) == m[y] || *(s + x) == n[y])
			{
				*(s + x) = numbers[y];
				break;
			}
		}
		x++;
	}

	return (s);
}
