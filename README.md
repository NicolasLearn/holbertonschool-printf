<div align="center">
  <h1>PROJECT holbertonschool-_printf</h1>
</div>

## _printf

Our project is to create the _printf function for these following conversion specifiers: c, s, %, d, i.
The _printf function in language This is a standard library function which allows you to display formatted data on the console. Its name means "print formatted", which indicates its ability to handle specific formats for different types of data. It typically takes a format string as the first argument, followed by the values to display, depending on the format specifications included in the string.

## Description

The _printf function is a formatted output function. It is primarily used to display text and other formatted data to the console.
The basic signature of the _printf function is as follows:
```bash
int _printf(const char* format, ...);
```
_printf returns the total number of characters written (including the number of bytes used to represent special characters such as newlines), or a negative number on error.

"const char *format" is a format string that specifies how additional arguments should be formatted and displayed. It can contain ordinary characters (which are simply copied to standard output) and format specifiers. Format specifiers typically begin with the "%" character followed by a character that indicates the expected data type. For example, "%d" is used for an integer, %s for a string, %c for a character, etc...

The ellipsis (...) indicates that the _printf function accepts a variable number of arguments. These arguments must match the format specifiers in the format string. Argument types must match format specifiers to avoid undefined behavior.

## Stage

To use the printf function we created all the structures in a main.h, so the first step is to include the main.h library: #include "main.h"

compilation
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o _printf
```
execution
```bash
./_printf
```
## Restriction

All our files must end with a new line.
A README.md file at the root of our project folder is required.
Our code should use Betty style. It will be checked using betty-style.pl and betty-doc.pl.
We are not allowed to use global variables.
You cannot put more than 5 functions per file.
Prototypes of all our functions should be included in your header file called main.h

## Main
*CODE*
```bash
#include "main.h"

int main() 
{
    // Votre code va ici
    return 0;
}

int main() 
{
    // Basic use of _printf
    _printf("Hello, world!\n");

    // Using _printf with variables
    int entier = 42;
    char caractere = 'A';

    _printf("Entier : %d\n", entier);
    _printf("Caractere : %c\n", caractere);
    _printf("String : %s\n", "i'm a string");
    _printf("Percent : %%\n");
    
    return 0;
}
```
*OUTPUT*
```bash
Hello, world!
Entier : 42
Caractère : A
String : i'm a string
Percent : %
```

## Return

The _printf function in C language returns the total number of characters written to standard output (usually the console). The return value indicates the number of bytes or characters that were displayed, including special characters such as newlines ("\n"). If an error occurs, _printf returns a negative number, and the errno variable is updated to indicate the type of error.

## Flowchart

<img src = "flowchart.png"></>


