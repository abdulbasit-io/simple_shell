#include "shell.h"
/**
  *_strcmp- compares two strings
  *@s1: first string
  *@s2: second string
  *Return: 0 if the strings are the same,
  *or an integer that tells the number of spaces between them
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 +  i) == *(s2 + i) && *(s1 + i))
		i++;
	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}
