#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * create_buffer - allocates 1024 bytes to a buffer
  * @filename: the name of the file buffer is storing chars for
  * Return: pointer to the newly-allocated buffer
  */

char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
  * close_file - closes a file, and prints an error if it fails to close
  * @descript: describes the error for the closed file
  * Return: 1 if it succeeds, else -1
  */

void close_file(int descript)
{
	int err;

	err = close(descript);
	if (err < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", descript);
		exit(100);
	}
}

/**
  * main - copies the files
  * @argc: number of arguments passed
  * @argv: pointers to array arguments
  * Return: 0 on succeeding, exits on failure
  */

int main(int argc, char *argv[])
{
	char *buffer;
	int read_b = 0;
	int write_b = 0;
	int fro_fd = -1;
	int to_fd = -1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	fro_fd = open(argv[1], O_RDONLY);
	read_b = read(fro_fd, buffer, 1024);
	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fro_fd < 0 || read_b < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		write_b = write(to_fd, buffer, read_b);
		if (to_fd < 0 || write_b < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		read_b = read(fro_fd, buffer, 1024);
		to_fd = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_b > 0);
	free(buffer);
	close_file(fro_fd);
	close_file(to_fd);
	return (0);
}
