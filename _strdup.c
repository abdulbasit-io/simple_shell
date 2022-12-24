#include "shell.h"
/**
 *_strdup- duplicates a string
 *@str: the string to be duplicated
 *Return: a pointer to the duplicate
 */

char *_strdup(char *str)
{
	char *duplicate;
	int len = 0;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	len++; /* for null terminator */

	duplicate = malloc(sizeof(char) * len); /* allocate memory */
	if (duplicate == NULL)
		return (NULL);

	duplicate = _strcpy(duplicate, str);
	return (duplicate);

}
