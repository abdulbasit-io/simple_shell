#include "shell.h"

int main(void)
{
	char *str = " this is a string";
	char *str2 = "this is str2";
	char *str1 = NULL;

	str1 = _strcat(str2, str);

	printf("str2: %s\n", str1);
	return (0);

}
