#ifndef __MAIN_H__
#define __MAIN_H__

	/*LIBRAIRY*/
#include <stdarg.h>

	/*PROTOTYPE FUNCTION and STRUCT : FILE "_printf.c"*/

/*STRUCT*/

/**
 * struct Format_type - struct for char list and function call
 *	adapted at the char
 *
 * @letter: char which indicated the format
 * @pointer_function: function pointer to function adapted at the char "type"
 */
typedef struct Format_type
{
	char letter;
	void (*pointer_function)(va_list current_arg);
} Format_type;

/*FUNCTION*/

int _printf(const char *format, ...);

	/*PROTOTYPE FUNCTION FILE : "format_print.c"*/

#endif
