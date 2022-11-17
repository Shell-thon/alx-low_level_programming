#include "function_pointers.h"
/**
 *  print_name - Print a name
 *  @name: Pointer of char type
 *  @f: Pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
