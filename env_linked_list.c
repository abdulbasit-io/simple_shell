#include "shell.h"

/**
 *env_linked_list- create a linked list from environmental variables
 *@env: environmental variables
 *Return: a pointr to the linked list
 */

list_t *env_linked_list(char **env)
{
	list_t *head;
	int i = 0;

	head = NULL;
	while (env[i] != NULL)
	{
		add_node_end(&head, env[i]);
		i++;
	}
	return (head);
}

/**
 *_env- prints environmental variables
 *@str: user string input
 *@env: environmental variable
 *Return: 0 on success
 */

int _env(char **str, list_t *env)
{
	free_double_ptr(str); /* frees user string input */
	print_list(env);
	return (0);
}
