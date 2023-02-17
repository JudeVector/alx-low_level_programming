#include <stdio.h>

/**
 *main - Prints all the numbers in n from 0 to 9 but using puchar
 *Return: Always 0 (Success)
 */
int main(void)
{
int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
