#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 (Success) or -1 (Failed)
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	size_t len, n;
	struct stat st;

	if (filename == NULL)
		return (-1);

	fp = fopen(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fp == NULL)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		n = fwrite(text_content, sizeof(char), len, fp);
		if (n != len)
		{
			fclose(fp);
			return (-1);
		}
	}

	if (stat(filename, &st) != 0)
		return (-1);
	if ((st.st_mode &  S_IRUSR) == 0 || (st.st_mode & S_IWUSR) == 0)
	{
		if (chmod(filename, S_IRUSR | S_IWUSR) != 0)
			return (-1);
	}
	return (1);
}
