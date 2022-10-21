#include "lists.h"

/**
 * list_len - prototype function
 *Description: counts number of elements in list
 *@h: list to count
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
int count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
