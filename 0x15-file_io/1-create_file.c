#include "main.h"

/**
 *      create_file - Function that creates a file.
 *      with 600 perms (do not change if it exists).
 *      @filename: Name for file.
 *      @text_content: Text to put into file.
 *      Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	 int fd, sz = 0, wr;

	 if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[sz] != '\0')
		sz++;

	wr = write(fd, text_content, sz);

	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
