#ifndef functions
#define functions
#include <stdarg.h>
#include <unistd.h>
int _putch(char ch);
int _printf(const char *format, ...);
int pint(va_list i);
int pstring(va_list s);
int pdec(va_list d);
int pchar(va_list c);
/**
 * struct switcher - Pair specifiers to their sutable handler functions
 * @sc: The specifiers
 * @f: The functions handler
 */

typedef struct switcher
{
	char *sc;
	int (*f)(va_list);
} _switch;

#endif
