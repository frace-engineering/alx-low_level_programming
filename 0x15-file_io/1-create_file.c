#include "main.h"



/**
 * _len - get the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _len(char *s)
{
	int i, count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		count += 1;
	}
	return (count);
}
/**
 * create_file - creates a file and write to it
 * @filename: pointer to the file name
 * @text_content: pointer to the text content
 *
 * Return: 1 on success else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fp, len, wrt;

	if (filename == NULL)
		return (-1);
	len = _len(text_content);
	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fp < 0)
	{
		write(STDOUT_FILENO, "File cannot be created", 23);
		return (-1);
	}
	wrt = write(fp, text_content, len);
	if (wrt < 0)
	{
		write(STDOUT_FILENO, "write failed", 13);
		return (-1);
	}
	close(fp);
	return (1);
}


