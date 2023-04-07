#include <stdio.h>
#include "main.h"

/**
 * binary_power - Custom implementation of exponentiation.
 * @base: The base value.
 * @pow: The power value.
 *
 * Return: The result of base raised to the power of pow.
 */
unsigned long int binary_power(unsigned int base, unsigned int pow)
{
	unsigned long int num = 1;
	unsigned int i;

	for (i = 1; i <= pow; i++)
		num *= base;
	return (num);
}

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 *
 * Return: None.
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev = binary_power(2, sizeof(unsigned long int) * 8 - 1);
	char flag = 0;

	while (dev != 0)
	{
		unsigned long int result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}

