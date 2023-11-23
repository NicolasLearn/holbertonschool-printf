#include "main.h"

/**
 * _printf - priint
 *
 * Descritpion: descritpiion
 *
 * @format: format
 *
 * Return: return
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
	if (format == NULL)
		return (-1);
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
