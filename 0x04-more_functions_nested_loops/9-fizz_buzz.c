#include <stdio.h>

/**
 * main -print the numbers fom 1 to 100
 * Fizz is printed three instead of the number
 * Buzz, for multiples of five
 * FizzBuzz is printed both for mulitples of three and five
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		       printf("FizzBuzz");

		else if ((x % 3) == 0)
			printf("Fizz");

		else if ((x % 5) == 0)
			printf("Buzz");

		else
			printf("%d", x);

		if (x == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
