#include "main.h"
/**
 * create_file - creates a file
 * @filename: is the name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on succes -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)

	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)

		return (-1);

	if (text_content != NULL)
	{
		ssize_t len = write(fd, text_content, strlen(text_content));

		if (len == -1)
		{
			close(fd);
			return (-1);

		}
	}

	close(fd);
	return (1);
}
