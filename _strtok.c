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
	while (*str == delm)
		str++;
	return (str);
}

/**
 *_strtok- tokenize a string and returns an array of the tokens
 *@str: user command t typed into the shell
 *@delm:  delimiter e.g " "
 *
 *Return: a pointer to an array of tokens (e.g {'ls", "-l"}
 */

char **_strtok(char *str, char *delm)
{
	int buffsize = 0, s_idx = 0, e_idx = 0;
	int len = 0, i = 0, p = 0, t = 0;
	char **toks = NULL, del;

	del = delm[0];

	/* create a nwe string ignoring al delimiters infront */
	str = ignore_delm(str, del);
	/* malloc toks to store array of tokens (buffsize + 1) and NULL ptr */
	buffsize = t_size(str, del);
	toks = malloc(sizeof(char *) * (buffsize + 2));
	if (toks == NULL)
		return (NULL);
	e_idx = _strlen(str); /* finds string ending index */
	while (s_idx < e_idx)
	{
		/* maloc length for each tokens in the array */
		if (str[s_idx] != del)
		{
			len = t_strlen(str, s_idx, del);
			toks[p] = malloc(sizeof(char) * (len + 1));
			if (toks[p] == NULL)
				return (NULL);
			i = 0;
			while ((str[s_idx] != del) && (str[s_idx] != '\0'))
			{
				toks[p][i] = str[s_idx];
				i++;
				s_idx++;
			}
			toks[p][i] = '\0';/* add null terminator */
			t++;
		}
		if (s_idx < e_idx && (str[s_idx + 1] != del && str[s_idx + 1] != '\0'))
			p++;
		s_idx++;
	}
	p++;
	toks[p] = NULL; /* sets last array ptr to null */
	return (toks);
}



























