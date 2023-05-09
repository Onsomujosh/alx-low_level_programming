#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: pointer to text in a file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it reads and prints
 * or 0 if file cannot be opened or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t fread, fwrite;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = (char *) malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	fread = read(fd, buffer, letters);
	if (fread == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	fwrite = write(STDOUT_FILENO, buffer, fread);
	if (fwrite == -1 || fwrite != fread)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);
	return (fread);
}
