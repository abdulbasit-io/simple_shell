#include "shell.h"

/**
 *t_strlen - returns token strlen for mallocing
 *@str: token
 *@pos: the index position in user's inputted command
 *@delm: delimiter
 *Return: token length
 */

int t_strlen(char *str, int pos, char delm)
{
	int len = 0;

	while ((str[pos] != delm) && (str[pos] != '\0'))
	{
		pos++;
		len++;
	}
	return (len);
}

/**
 *t_size- returns the number o delimiters,
 *ignoring continuos delm
 *@str: user command
 *@delm: th delimiter
 *
 *Return: num of delimiters
 */

int t_size(char *str, char delm)
{
	int i = 0, num_delm = 0;

	while (str[i] != '\0')
	{
		if ((str[i] == delm) && (str[i + 1] != delm))
			num_delm++;
		if ((str[i] == delm) && (str[i + 1] == '\0'))
			/* handle continuos delm after commmad */
			num_delm--;
		i++;
	}
	return (num_delm);
}

/**
 *ignore_delm- returns a version of string without delimiter
 *@str: the string
 *@delm: the delimiter
 *Return: a string without delm (e.g "    ls  -l --> "ls -l"
 */

char *ignore_delm(char *str, char delm)
{
	while (str == delm)
		str++;
	return (str);
}


char **_strtok(char *str, char *delm)
{

}



























