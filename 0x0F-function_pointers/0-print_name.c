#include "function_pointers.h"

/**
 * print_name - a basic function that print name
 * @name: a type char
 * @f:  a pointer to char function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
