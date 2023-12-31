#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFSIZE 1024


/**
 * struct conv_specifier - to match with the cinversion specifiers
 * @specifier: format _passed
 * @f: pointer to function for conversiton spec
 *
 * Description: struct to define the map for format specifiers
 */
typedef struct conv_specifier
{
char *specifier;
int (*f)(va_list);
} specifier_match;

int _putchar(char c);
int _printf(const char *format, ...);
int handle_specifier(const char *specifier, va_list args);
int _print_char(va_list args);
int _print_string(va_list args);
int _print_percent(__attribute__((unused))va_list args);
int _print_int(va_list args);
int _print_binary(va_list args);
int get_integer(va_list list);
int _print_unsigned(va_list args);
int print_unsgined_int(unsigned int number);
int _print_octal(va_list args);
int _print_hexdecimal(va_list args);
int _print_hexadecimal(va_list args);

#endif
