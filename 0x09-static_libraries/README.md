#static Libraries in C

This project involves creating a static library in C and using it in a program. The library contains several functions, each of which is compiled into an object file and then added to the library.

## Functions

The library contains the following functions:

- `int _putchar(char c);`
- `int _islower(int c);`
- `int _isalpha(int c);`
- `int _abs(int n);`
- `int _isupper(int c);`
- `int _isdigit(int c);`
- `int _strlen(char *s);`
- `void _puts(char *s);`
- `char *_strcpy(char *dest, char *src);`
- `int _atoi(char *s);`
- `char *_strcat(char *dest, char *src);`
- `char *_strncat(char *dest, char *src, int n);`
- `char *_strncpy(char *dest, char *src, int n);`
- `int _strcmp(char *s1, char *s2);`
- `char *_memset(char *s, char b, unsigned int n);`
- `char *_memcpy(char *dest, char *src, unsigned int n);`
- `char *_strchr(char *s, char c);`
- `unsigned int _strspn(char *s, char *accept);`
- `char *_strpbrk(char *s, char *accept);`
- `char *_strstr(char *haystack, char *needle);`

If you haven't coded all of the above functions yet, you can create empty ones with the correct prototypes.

## Creating the Library

To create the static library named `libmy.a`, compile each of your `.c` files into object files and then use the `ar` command:

```bash
gcc -c myfile.c -o myfile.o
ar -rc libmy.a myfile.o

