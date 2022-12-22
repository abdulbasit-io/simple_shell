#include "shell.h"

int main(void)
{
	char *str = "this";
	char *str1 = "this is";
	int s;

	s = _strcmp(str, str1);

	printf("str1: %d\n", s);
	return (0);

}
