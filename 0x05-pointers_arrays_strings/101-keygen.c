#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that generates random valid passwords for the
 * program 101-crackme.
 *
 * Return: 0 on Success
 */
int main(void)
{
	int password[100];
	int x, y, z;

	z = 0;

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		password[x] = rand() % 78;
		y += (password[x] + '0');
		putchar(password[x] + '0');
		if ((2772 - y) - '0' < 78)
		{
			z = 2772 - y - '0';
			y += z;
			putchar(z + '0');
			break;
		}
	}

	return (0);
}
