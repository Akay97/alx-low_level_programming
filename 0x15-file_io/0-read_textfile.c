#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - a function that reads a file
 * and prints it to the POSIX standard output.
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 * Return: The number of letters read and printed. Else return 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_descript;
	char *buff;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}
	f_descript = open(filename, O_RDONLY);
	if (f_descript == -1)
	{
		return (0);
	}

	buff = (char *)malloc(letters);
	if (buff == NULL)
	{
		close(f_descript);
		return (0);
	}

	bytes_read = read(f_descript, buff, letters);
	if (bytes_read == -1)
	{
		close(f_descript);
		free(buff);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buff, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(f_descript);
		free(buff);
		return (0);
	}
	close(f_descript);
	free(buff);

	return (bytes_written);
}
