#include "shell.h"

int main(void)
{
	char *str = " this is a string";
	char *str1 = NULL;

	str1 = _strdup(str);

	printf("str1: %s\n", str1);
	return (0);

}
