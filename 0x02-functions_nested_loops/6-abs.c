#include "main.h"

/**
 * _abc - Computes the absolute value of an integer.
 * @c: The number to be computed.
 * Return: Absolute value of number or zero
 */

int _abc(int c)

{
	if (c < 0)
	{
	int abc_val;

	abc_val = c * -1;
	return (abc_val);
	}
	return (c);
}
