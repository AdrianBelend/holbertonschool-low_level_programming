#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: string
 * @letter: number of letters it should read and print
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
 	char *b;
        int o, r, w;

        if (filename == NULL)
                return (0);

        b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);
        o = open(filename, O_RDONLY);
	r = read(o, b, letters);
	w = write(1, b, r);

	if (o == -1 || r == -1 || w == -1)
		return (0);
	
	close(o);
	return(w);
}
