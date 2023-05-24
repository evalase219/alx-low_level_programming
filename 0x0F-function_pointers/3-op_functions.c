#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - A program that returns the addition of two numbers
 * @a: first number to add
 * @b: second number to add
 *
 * Return: The addition of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - A program that returns the subtraction of two numbers.
 * @a: first number to subtract
 * @b: second number to subtract
 *
 * Return: The subtraction of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - A program that returns the multiplication of two numbers.
 * @a: first number to multiply.
 * @b: second number to multiply.
 *
 * Return: The multiplication of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - A program that returns the division of two numbers.
 * @a: first number to divide.
 * @b: second number to divide.
 *
 * Return: The division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - A program that returns the modulus of the quotient of two numbers.
 * @a: first number to divide.
 * @b: second number to divide.
 *
 * Return: The modulus of a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
