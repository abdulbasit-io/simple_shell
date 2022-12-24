#include "shell.h"

/**
 *_strcat - concatenates two strings
 *@dest: the string to be appended to
 *@src: the string to append
 *
 *Return: a pointer to concatenated variable
 */

char *_strcat(char *dest, char *src)
{
	int d_len = 0; /* dest length */
	int s_len = 0; /*src length */
	int total_len = 0;
	int j = 0;
	char *d, *s;

	d_len = _strlen(dest);
	s_len = _strlen(src);
	total_len = d_len + s_len;

	d = malloc(sizeof(char) * d_len);
	s = malloc(sizeof(char) * s_len);
	if (d == NULL || s == NULL)
		return (NULL);

	d = _strcpy(d, dest);
	s = _strcpy(s, src);

	d = _realloc(d, d_len, sizeof(char) * total_len + 1);

	while (s[j] != '\0')
	{
		*(d + d_len) = *(s + j);
		d_len++;
		j++;
	}

	d[d_len] = '\0';
	return (d);
}






