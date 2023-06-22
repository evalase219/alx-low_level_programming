#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - program that returns the sum of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the addition of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - program that returns the substraction of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the substraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - program that returns the multiply two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - program that returns the division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - program that returns the modulus of two munbers
 * @a: first number
 * @b: second number
 *
 * Return: the modulus of two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
