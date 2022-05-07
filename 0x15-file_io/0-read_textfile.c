#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
  * read_textfile - reads a text file and prints to POSIX STDOUT
  * @filename: filename to open
  * @letters: number of letters to read and print
  * Return: if cannot be opened or read, 0
  *         if filename is NULL, 0
  *         if write fails, or writes less bytes than expected, 0
  *         else the actual number of letters it could read and print
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdo;
	int fdr;
	int fdw;
	char *tmp;

	if (filename == NULL)
		return (0);

	tmp = malloc(sizeof(char) * letters);
	if (tmp == NULL)
		return (0);

	fdo = open(filename, O_RDONLY);
	if (fdo < 0)
	{
		free(tmp);
		return (0);
	}

	fdr = read(fdo, tmp, letters);
	if (fdr < 0)
	{
		free(tmp);
		return (0);
	}

	fdw = write(STDOUT_FILENO, tmp, fdr);
	free(tmp);
	close(fdo);

	if (fdw < 0)
		return (0);
	return ((ssize_t)fdw);
}
