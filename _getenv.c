#include "shell>h"

/**
 *c_strdup- excludes the begining bytes in strdup
 *@str: the string to duplicate
 *@cs: the number of bytes to exclude
 *Return: string with excluded bytes
 */

char *c_strdup(char *str, int cs)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	len++;

	duplicate = malloc(sizeof(char) * (len - cs));
	if (duplicate == NULL)
		return (NULL);
	i = 0;
	while (i < (len - cs))
	{
		*(duplicate + i) = *(str + cs + i);
		i++;
	}
	return (duplicate);
}

/**
 *get_env- finds and return a copy of the requested env variable
 *@str: string to store it in
 *@env: list of environmental variables
 *Return: copy of requested env variable
 */

char *get_env(char *str, list_t *env)
{
	int j = 0, cs = 0;

	while (env != NULL)
	{
		j = 0;
		while ((env->var)[j] == str[j])
			j++;
		if (str[j] == '\0' && (env->var)[j] == '=')
			break;
		env = env->next;
	}
	while (str[cs] != '\0')
		cs++;
	cs++;
	return (c_strdup(env->var, cs));

}

