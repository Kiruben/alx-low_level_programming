#include "lists.h"

/**
 *print_list - prototype function
 *Description: prints all elements of a singly linked list
 *@h: list to print
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
int count = 0;
const list_t *ptr;
ptr = h;
if (h == NULL)
{
printf("[0] (nil)\n");
}
else
{
while (ptr != NULL)
{
if (ptr->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", ptr->len, ptr->str);
}
count++;
ptr = ptr->next;
}
}
return (count);
}
