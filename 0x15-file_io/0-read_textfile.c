#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include "main.h"
/**
  * read_textfile - reads a text file and prints it to POSIZ stdout
  * @filename: the name of the file
  * @letters: the number of letters that should be read and printed
  * Return: actual number of letters
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[1024];
	ssize_t bytes_read, tots_read, bytes_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	tots_read = 0;

	while (letters > 0)
	{
		bytes_read = read(fd, buffer, sizeof(buffer));
		if (bytes_read <= 0)
			break;

		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

		if (bytes_written != bytes_read)
		{
			close (fd);
			return(0);
		}
		tots_read += bytes_read;
		letters -= bytes_read;
	}

	close (fd);
	return (tots_read);
}
