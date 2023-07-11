#include "main.h"



/**
 * _len - get the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _len(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	return (i);
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
	if (fp == -1)
	{
		close(fp);
		return (-1);
	}
	if (text_content != NULL)
	{
		wrt = write(fp, text_content, len);

		if (wrt == -1)
		{
			close(fp);
			return (-1);
		}
	}
	else
	{
		wrt = write(fp, NULL, 0);

		if (wrt == -1)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
