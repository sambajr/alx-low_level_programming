1. _strcat
Description:
This function concatenates two strings. It appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a new terminating null byte. The modified dest string is returned.

Prototype:char *_strcat(char *dest, char *src);
Usage:
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr = _strcat(s1, s2);
	printf("%s", ptr);
2. _strncat
Description:
This function is similar to _strcat but with an additional parameter n. It concatenates src to dest, using at most n bytes from src. src does not need to be null-terminated if it contains n or more bytes. The modified dest string is returned.

Prototype:char *_strncat(char *dest, char *src, int n);
Usage:
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr = _strncat(s1, s2, 1);
	printf("%s", ptr);Usage:
3. _strncpy
Description:
This function copies a string from src to dest. It copies at most n characters from src to dest. It works similarly to the strncpy standard library function.

Prototype:char *_strncpy(char *dest, char *src, int n);
Usage:
c
Copy code
char s1[98];
char *ptr;
ptr = _strncpy(s1, "Copy this string.", 5);
printf("%s", s1);

