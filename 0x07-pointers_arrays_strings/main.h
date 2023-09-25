#ifndef MAIN_H
#define MAIN_H
int _putchar(char);
char *_memset(char *, char, unsigned int);
char *_memcpy(char *, char *, unsigned int);
unsigned int _strspn(char *, char *);
char *_strpbrk(char *, char *);
char *_strstr(char *, char *);
void print_chessboard(char (*)[]);
void print_diagsums(int *, int);
void set_string(char **, char *);
#endif
