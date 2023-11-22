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
	int printed_char = 0, indice_symbol = 0, index = 0;
	char current_char;
	va_list current_arg;
	Format_type print_function_choice[] = {
		{'%', print_percent}, {'c', print_char}, {'s', print_string},
		{'d', print_int}, {'i', print_int}, {'\0', NULL}
	};

	va_start(current_arg, format);
	while ((format != NULL) && (format[index] != '\0'))
	{
		current_char = format[index];
		if (current_char != '%')
			printed_char += write(1, &current_char, 1);
		else
		{
			index++;
			current_char = format[index];
			indice_symbol = check_symbol(current_char, print_function_choice);
			if (indice_symbol == 5)
				printed_char += print_unknow_symbol(current_char, current_arg);
			else
				printed_char += print_function_choice[indice_symbol].ptr_func(current_arg);
		}
		index++;
	}
	va_end(current_arg);
	return (printed_char);
}
