#include "shell.h"

int main(void)
{
	char *str = "this is a string";
	char *str2 = malloc(sizeof(char) * 30);
	_strcpy(str2, str);

	printf("str2: %s\n", str2);
	return (0);

}
