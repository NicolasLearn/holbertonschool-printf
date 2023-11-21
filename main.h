#ifndef __MAIN_H__
#define __MAIN_H__

/*---------------------------------------------------------------------------*/
				/*LIBRAIRY*/
/*---------------------------------------------------------------------------*/
#include <stdarg.h>
#include <unistd.h>

/*---------------------------------------------------------------------------*/
		/*PROTOTYPE FUNCTION and STRUCT : FILE "_printf.c"*/
/*---------------------------------------------------------------------------*/

		/*STRUCT*/

/**
 * struct Format_type - struct for char list and call function
 * adapted at the char
 *
 * @letter: char which indicated the format
 * @pointer_function: function pointer to function adapted at the char "type"
 */
typedef struct Format_type
{
	char letter;
	int (*pointer_function)(va_list current_arg);
} Format_type;

		/*FUNCTION*/

int _printf(const char *format, ...);

/*---------------------------------------------------------------------------*/
		/*PROTOTYPE FUNCTION FILE : "print_formats.c"*/
/*---------------------------------------------------------------------------*/

int print_percent(void);
int print_char(va_list current_arg);
int print_string(va_list current_arg);
int print_int(va_list current_arg);

/*---------------------------------------------------------------------------*/
		/*PROTOTYPE FUNCTION FILE : "lenght_function.c"*/
/*---------------------------------------------------------------------------*/

int _strlen(char *s);
int _intlen(int);
int _putchar(char c);

#endif
