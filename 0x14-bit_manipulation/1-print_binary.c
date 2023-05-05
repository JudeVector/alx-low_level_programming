#include "main.h"
/**
 * _power - Custom implementation of exponentiation.
 * @base: The base value.
 * @pow: The power value.
 *
 * Return: The result of base raised to the power of pow.
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int n;
	unsigned int i;

	n = 1;
	for (i = 1; i <= pow; i++)
		n *= base;
	return (n);
}
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 *
 * Return: None.
 */
void print_binary(unsigned long int n)
{
	unsigned long int vec, result;
	char flag;

	flag = 0;
	vec = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (vec != 0)
	{
		result = n & vec;
		if (result == vec)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || vec == 1)
		{
			_putchar('0');
		}
		vec >>= 1;
	}
}

