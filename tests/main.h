#ifndef functions
#define functions
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int _putch(char ch);
int _printf(const char *format, ...);
int pint(va_list i);
int pstring(va_list s);
int pdec(va_list d);
int pchar(va_list c);
int pbin(va_list args);
int phex(va_list lst);
int pHex(va_list lst);
/**
 * struct switcher - matches format to function
 * @sc: The specifier
 * @f: The functions
 */

typedef struct switcher
{
	char *sc;
	int (*f)(va_list);
} _switch;

#endif
