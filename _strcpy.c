#include "shell.h"

/**
 *_strcpy- copies the content of string to another string
 *including the null terminator
 *@dest: the destinatino to copy to
 *@src: the source to copy from
 *
 *Return: dest- a copy of the source
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = _strlen(src);

	for (i = 0; i < len; i++)
		*(dest + i) = *(src + i);

	return (dest);

}

