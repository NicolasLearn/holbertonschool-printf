#ifndef __MAIN_H__
#define __MAIN_H__

	/*LIBRAIRY*/
#include <stdarg.h>

	/*PROTOTYPE FUNCTION and STRUCT : FILE "_printf.c"*/

/*STRUCT*/
typedef struct Format_type {
	char letter;
	void (*pointer_function)(va_list current_arg);
} Format_type;

/*FUNCTION*/
int _printf(const char *format, ...);

	/*PROTOTYPE FUNCTION FILE : "format_print.c"*/

#endif
