#include "main.h"
/**
 * _pow_recursion -Rturns the value of x raised to the power of y
 * @x: the first value
 * @y: the second value
 *
 * Return: the value multiplied y times
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
