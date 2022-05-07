#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
  * create_file - creates a file
  * @filename: name of the file to create
  * @text_content: a NULL terminated string to write to the file
  * Return: returns -1 when (file cannot be created, written, write "fails")
  *         else return 1
  * Description - created file must have permissions "rw-------".
  *               If file exists, don't change permissions.
  *               If file exists, truncate it
  *               If filename if NULL, return -1
  *               If text_content is NULL create an empty file
  */

int create_file(const char *filename, char *text_content)
{
	int fdo;
	int fdw;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fdo < 0)
	{
		return (-1);
	}
	while (text_content && *(text_content + len))
		len++;

	fdw = write(fdo, text_content, len);
	if (fdw < 0)
	{
		return (-1);
	}

	return (1);
}
