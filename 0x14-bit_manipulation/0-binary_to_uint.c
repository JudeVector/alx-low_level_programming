#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 *         string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (!b)
		return (0);

	/* Loop through each character in the string */
	for (i = 0; b[i] != '\0'; i++)
	{
		/* Check for invalid characters */
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	/* Convert binary digits to unsigned integer */
	for (i = 0; b[i] != '\0'; i++)
	{
		/* Left shift by 1, equivalent to multiplying by 2 */
		num <<= 1;

		/* If the current digit is '1', add it to the result */
		if (b[i] == '1')
			num += 1;
	}

	return (num);
}

