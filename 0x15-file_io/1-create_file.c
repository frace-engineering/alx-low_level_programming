#include "main.h"

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

int create_file(const char *filename, char *text_content)
{
	int fp, len, wrt;

	if (filename == NULL)
		return (-1);
	len = _len(text_content);
	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fp < 0)
		return (-1);
	wrt = write(fp, text_content, len);
	if (wrt < 0)
		return (-1);
	close(fp);
	return (1);
}


