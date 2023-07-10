#include "main.h"

/**
 * _len - get length of a string
 * @s: pointer to a string
 *
 * Return: length
 */
int _len(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * append_text_to_file - appends text to a file
 * @filename: pointer to file name
 * @text_content: pinter to text content
 *
 * Return: number of character appended
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, wrt, len;

	len = 0;
	fp = open(filename, O_RDWR | O_APPEND, 0664);
	if (fp < 0)
	{
		close(fp);
		return (-1);
	}
	len = _len(text_content);
	wrt = write(fp, text_content, len);
	if (wrt < 0)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}

