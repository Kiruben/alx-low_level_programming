#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>
int _putchar(char);
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *, void(*)(char *));
int int_index(int *, int, int (*)(int));

#endif
