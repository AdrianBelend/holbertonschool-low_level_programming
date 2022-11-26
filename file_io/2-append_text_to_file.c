#include "main.h"
#include <string.h>
/**
 * append_text_to_file - Entry point
 * @filename: char *
 * @text_content: char *
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int l = strlen(text_content);

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		o = open(filename, O_WRONLY | O_APPEND);
		if (o == -1)
			return (-1);
		w = write(o, text_content, l);
		if (w == -1)
		{
			close(o);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(o);
	return (1);
}
