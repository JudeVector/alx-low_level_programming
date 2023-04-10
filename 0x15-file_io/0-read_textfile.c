i#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Custom function to read a text file and print it.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_desc, bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
	bytes_read = read(file_desc, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (file_desc == -1 || bytes_read == -1 || bytes_written == -1
	|| bytes_written != bytes_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file_desc);

	return (bytes_written);
}

