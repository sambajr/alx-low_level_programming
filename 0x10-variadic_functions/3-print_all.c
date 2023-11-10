#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *  * print_all - prints anything
 *   * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	char *pstr;
	char *sapa;
	unsigned int i;

	sapa = "";

	va_start(arg, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%s%c", sapa, va_arg(arg, int));
				sapa = ", ";
				break;
			case 'i':
				printf("%s%d", sapa, va_arg(arg, int));
				sapa = ", ";
				break;
			case 'f':
				printf("%s%f", sapa, va_arg(arg, double));
				sapa = ", ";
				break;
			case 's':
				pstr = va_arg(arg, char *);
				if (!pstr)
					pstr = "(nil)";
				printf("%s%s", sapa, pstr);
				sapa = ", ";
				break;
		}
	}
	printf("\n");
	va_end(arg);
}




