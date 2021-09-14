#ifndef _MAIN_H
#define _MAIN_H


char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
int _putchar(char c);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
void set_string(char **s, char *to);
void print_diagsums(int *a, int size);
void print_chessboard(char (*a)[8]);
char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char *accept);







#endif
