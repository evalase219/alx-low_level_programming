#include <stdio.d>

/**
 * main - Finds and prints the sum of the even-valued terms
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long num1 = 0, num2 = 1, numsum;
	float tot_sum;

	while (1)
	{
		numsum = num1 + num2;
		if (numsum > 4000000)
			break;

		if ((numsum % 2) == 0)
			tot_sum += numsum;

		num1 = num2;
		num2 = numsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
