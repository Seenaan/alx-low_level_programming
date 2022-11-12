#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
int _putchar(char c);
char **strtow(char *str);
char *argstostr(int ac, char **av);
int number(char *str);
void free_everything(char **string, int i);

#endif