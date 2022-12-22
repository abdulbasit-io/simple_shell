#include "shell.h"

/**
 *_getline - stores user's command into a malloc buffer
 *@str: the buffer
 *Return:number of characters read
 */

size_t _getline(char **str)
{
	ssize_t i = 0, size = 0, j = 0, reading = 0, n = 0;
	char buff[1024];

	/* read while there is stdin greater than buff size; -1 to add '\0' */
	while (reading == 0 && (i = read(STDIN_FILENO, buff, 1024 - 1)))
	{
		if (i == -1) /* check for error in read */
			return (-1);

		buff[i] = '\0';/* terminate buff with '\0' */
		n = 0;
		while (buff[n] != '\0')
		{
			if (buff[n] == '\n')
				reading = 1; /* stops reading from stdin */
			n++;
		}
		/* copies buff to *str */
		if (j == 0)
		{
			i++;
			*str = malloc(sizeof(char) * i);
			*str = _strcpy(*str, buff);
			size = i;
			j = 1; /* limit malloc to first time */
		}
		else
		{
			/* realloc via _strcat for each loop */
			size += 1;
			*str = _strcat(*str, buff);
		}
	}
	return (size);
}

