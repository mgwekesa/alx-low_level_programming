#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
  * append_text_t0_file - appends text to the end of a file
  * @filename: name of the file to append to
  * @text_content: a NULL terminated string to add at the end of the file
  * Return: returns -1 on failure
  *         else return 1
  * Description - if file doesn't exist, DON'T create it
  *		  if filename is NULL, return -1
  *		  if text_content is NULL, do not add anything to the file
  *               if file exists return 1,
  *		  if file doesn't not exist, no write permissions; return -1
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdo;
	int fdw;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, O_RDWR | O_APPEND);
	if (fdo < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fdo);
		return (1);
	}

	while (*(text_content + len))
		len++;

	fdw = write(fdo, text_content, len);
	close(fdo);
	if (fdw < 0)
	{
		return (-1);
	}

	return (1);
}
