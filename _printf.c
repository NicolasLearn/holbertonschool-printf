#include "main.h"

/**
 * _printf - Prints a formatted string passed in the "format" parameter,
 * including the value of the variables specified with the conversion
 * specifiers, on the final print string.
 *
 * @format: Is the template of the string to print, containing the conversion
 * specifiers used to indicate and include the parameter values passed in the
 * final string to print.
 *
 * Return: On sucess, return the number of characters printed.
 * On failed, return -1.
 *
 * Description: Prints a formatted string passed in the "format" parameter.
 * If format is "NULL" or equal to only "%", returns an error.
 * Otherwise, print each format character.
 * If the character "%" is found, followed by a valid conversion specifier,
 * the function replaces "%<conversion_specifier>" with the value of the
 * variable associated with this specifier.
 * If no match, prints the "%" character followed by the unknown character.
 * The function returns (-1) in case of error or the number of
 * characters printed.
 */

int _printf(const char *format, ...)
{
	int printed_char = 0, index_specifier = 0, index = 0;
	char current_char;
	va_list current_arg;
	Format_type chose_print_format[] = {
		{'%', print_percent}, {'c', print_char}, {'s', print_string},
		{'d', print_int}, {'i', print_int},
		{'\0', NULL}
	};

	va_start(current_arg, format);
	if ((format == NULL) || ((format[0] == '%') && (format[1] == '\0')))
	{
		va_end(current_arg);
		return (-1);
	}
	while (format[index] != '\0')
	{
		current_char = format[index];
		if (current_char != '%')
			printed_char += write(1, &current_char, 1);
		else
		{
			index++;
			current_char = format[index];
			index_specifier = check_symbol(current_char, chose_print_format);
			if (chose_print_format[index_specifier].letter == '\0')
				printed_char += print_unknow_symbol(current_char, current_arg);
			else
				printed_char += chose_print_format[index_specifier].ptr_func(current_arg);
		}
		index++;
	}
	va_end(current_arg);
	return (printed_char);
}