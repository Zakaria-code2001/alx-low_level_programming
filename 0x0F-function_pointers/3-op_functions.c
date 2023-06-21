#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Return The Sum of two numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The sum of a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - it Returns the difference of two numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The difference of a -  b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - it Returns the product of two numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The product of a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - it Returns the division of two numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The quotient of a/b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - it Returns the remainder of the division of two numbers.
 * @a: The 1st number.
 * @b: The 2nd number.
 *
 * Return: The remainder of the division of a % b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
