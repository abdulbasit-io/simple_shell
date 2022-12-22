#include "shell.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	/* frees memory if the new_size to realloc is 0 */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* return ptr if reallocating same old size */
	if (new_size == old_size)
		return (ptr);
	/* malloc new_size if ptr is originally NULL */
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		else
			return (p);
	}

	/* if ptr != NULL and new_size > old_size */
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	/* now fill up existing spaces, till maximum value of old_size */
	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)p + i) = *((char *)ptr + i);
	free(ptr);
	return (p);
}
