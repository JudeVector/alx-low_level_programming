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
	int zyk;
	unsigned int number = 0;

	if (!b)
		return (0);

	/* Loop through each character in the string */
	for (zyk = 0; b[zyk] != '\0'; zyk++)
	{
		/* Check for invalid characters */
		if (b[zyk] != '0' && b[zyk] != '1')
			return (0);
	}

	/* Convert binary digits to unsigned integer */
	for (zyk = 0; b[zyk] != '\0'; zyk++)
	{
		/* Left shift by 1, equivalent to multiplying by 2 */
		number <<= 1;

		/* If the current digit is '1', add it to the result */
		if (b[zyk] == '1')
			number += 1;
	}

	return (number);
}
