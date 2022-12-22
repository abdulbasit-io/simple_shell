#include "shell.h"
/**
 *main - entry point into the program
 *Description: this function is just for testing
 *Return: not fixed
 */
int main(void)
{
	char *str = "this";
	char *str1 = "this is";
	int s;

	s = _strcmp(str, str1);

	printf("str1: %d\n", s);
	return (0);

}
