#ifndef SHELL
#define SHELL

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <wait.h>
#include <fcntl.h>
#include <dirent.h>
#include <signal.h>

/* helper functions */
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);

/* strtok custom function */
int t_strlen(char *str, int pos, char delm);
int t_size(char *str, char delm);
char *ignore_delm(char *str, char delm);
char **_strtok(char *str, char *delm);

#endif
