#include "shell.h"
/**
 *_strlen - finds the length of a given string
 *@str: the passed string
 *Return: returns the length of the string
 */

int _strlen(char *str)
{
	int i = 0;

	while (*(str +  i))
		i++;
	return (i);
}
