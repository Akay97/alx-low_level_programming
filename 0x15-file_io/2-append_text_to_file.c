#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

/**
 * append_text_to_file - a function that append
 * text to a file at the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The terminated string to add at the end of the file.
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_descript;
	ssize_t bytes_writ;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	f_descript = open(filename, O_WRONLY | O_APPEND);

	if (f_descript == -1)
	{
		return (-1);
	}

	bytes_writ = write(f_descript, text_content, strlen(text_content));

	if (bytes_writ == -1)
	{
		close(f_descript);
		return (-1);
	}

	close(f_descript);

	return (1);
}
