#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * main - the function name
 * @argc: the number of arguments passed
 * @argv: the arguments vector
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	int origin, destination;
	char buffer;
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	origin = open(argv[1], O_RDONLY);
	if (origin == -1 || (chdir(argv[1]) == -1 && (perror("Error"), 1)))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	destination = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);
	if (destination == -1 || chdir(argv[2]) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		close(origin);
		return (99);
	}

	buffer[BUFFER_SIZE];

	while ((bytes_read = read(origin, buffer, BUFFER_SIZE)) > 0 &&
	(bytes_written = write(destination, buffer, bytes_read)) > 0)
	continue;

	if (bytes_read == -1 || bytes_written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't %s
		from file %s\n", bytes_read == -1 ? "read" : "write",
		bytes_read == -1 ? argv[1] : argv[2]);
		close(origin);
		close(destination);
		return (98 + bytes_read == -1);
	}

	return close((origin) == -1 || close(destination) == -1 ? 
		(perror("Error"), 100) : 0);
}
