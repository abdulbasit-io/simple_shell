#include "shell.h"

/**
 *print_list- prints linked lists
 *@h: the linked list to be printed
 *Return: the number of lists printed
 */

size_t print_list(list_t *h)
{
	list_t *c_list = h;
	int count = 0, c = 0;

	if (h == NULL)
		return (0);
	while (c_list != NULL)
	{
		if (c_list->var == NULL)
		{
			write(STDOUT_FILENO, "(nil)", 5);
			write(STDOUT_FILENO, "\n", 1);
		}
		else
		{
			c = 0;
			while ((c_list->var)[c] != '\0')
				c++;
			write(STDOUT_FILENO, c_list->var, c);
			write(STDOUT_FILENO, "\n", 1);
		}
		c_list = c_list->next;
		count++;
	}
	return (count);
}

/**
 *add_node_end- adds node to the end  of a linked list
 *@head: a pointer to the head of linked list
 *@str: the value to be stored in the new list
 *Return: a pointer to the new linked list
 */

list_t *add_node_end(list_t **head, char *str)
{
	list_t *new;
	list_t *holder;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->var = _strdup(str);
	new->next = NULL;

	holder = *head;
	if (holder != NULL)
	{
		while (holder->next != NULL)
		{
			holder = holder->next;
		}
		holder->next = new;
	}
	else
	{
		*head = new;
	}
	return (*head);
}

/**
 *delete_nodeint_at_index- removes node at an index
 *@head: a pointer to the linkedlist head address
 *@index: index to remove
 *Return: 1 on success, 0 on failure
 */

int delete_nodeint_at_index(list_t **head, int index)
{
	list_t *n_header;
	list_t *holder;
	int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		holder = (*head)->next;
		free((*head)->var);
		free(*head);
		*head = holder;
		return (1);
	}
	count = 1;
	n_head = *head;
	while (count < index)
	{
		if (n_head == NULL)
			return  (-1);
		n_head = n_head->next;
		count++;
	}
	holder = n_head->next;
	n_head = holder->next;
	free(holder->var);
	free(holder);
	return (1);

}

/**
 *free_linked_list- frees linked list
 *@list: the linked list
 */

void free_linked_list(list_t *list)
{
	list_t *holder;

	while (list != NULL)
	{
		holder = list;
		list = list->next;
		free(holder->var);
		free(holder);
	}
}






















