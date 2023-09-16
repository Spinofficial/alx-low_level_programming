#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - This will return the sum of two numbers
 * @a: This is the first Number
 * @b: The second number
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - This returns the difference of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - This will return the product of two numbers
 * @a: The first numbers
 * @b: the second number
 *
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - This returns the Devision of two numbers
 * @a: The First number
 * @b: The second number
 *
 * Return: The quotient  of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - This Returns the remainder of the division of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: The remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
