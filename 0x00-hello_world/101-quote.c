/*
 * File: 101-quote.c
 * Author: Jude Ndubuisi
 */
#include <unistd.h>

/**
 * main - Prints the message which is in the
 * array msg into the standard error 
 *
 *
 * Return: Always 1.
 */
int main(void)
{
    const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    const int len = sizeof(msg) - 1;
    write(STDERR_FILENO, msg, len);
    return 1;
}

