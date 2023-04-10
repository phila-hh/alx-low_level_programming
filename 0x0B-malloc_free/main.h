#ifndef MAIN_H
#define MAIN_H

char _putchar(char c);
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif /* MAIN_H */
