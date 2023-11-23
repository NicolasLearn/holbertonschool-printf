#ifndef __MAIN_H__
#define __MAIN_H__

/*---------------------------------------------------------------------------*/
								/*LIBRAIRY*/
/*---------------------------------------------------------------------------*/
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/*---------------------------------------------------------------------------*/
				/*PROTOTYPE FUNCTION and STRUCT : FILE "_printf.c"*/
/*---------------------------------------------------------------------------*/

		/*STRUCT*/

/**
 * struct Format_type - struct for char list and call function
 * adapted at the char.
 *
 * @letter: char which indicated the format.
 * @ptr_func: function pointer to function adapted at the char "letter".
 */
typedef struct Format_type
{
	char letter;
	int (*ptr_func)(va_list current_arg);
} Format_type;

		/*FUNCTION*/

int _printf(const char *format, ...);

/*---------------------------------------------------------------------------*/
				/*PROTOTYPE FUNCTION FILE : "print_formats.c"*/
/*---------------------------------------------------------------------------*/

int print_unknow_symbol(char current_char, va_list current_arg);
int print_percent(va_list current_arg);
int print_char(va_list current_arg);
int print_string(va_list current_arg);
int print_int(va_list current_arg);

/*---------------------------------------------------------------------------*/
				/*PROTOTYPE FUNCTION FILE : "manip_values_int.c"*/
/*---------------------------------------------------------------------------*/

int _intlen(int);
void converted_int_to_string(int number, char *str, int lenght);
int print_INT_MIN(void);

/*---------------------------------------------------------------------------*/
				/*PROTOTYPE FUNCTION FILE : "manip_values_string.c"*/
/*---------------------------------------------------------------------------*/

int check_symbol(char current_char, Format_type array_symbol[]);
int _strlen(char *s);
int _putchar(char c);

#endif
