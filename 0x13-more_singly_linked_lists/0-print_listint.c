#include "lists.h"

/**
 *print_listint - prototype function
 *Description: prints all elements in list
 *@h: list to print
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
unsigned int nodes = 0;
const listint_t *temp = h;
while (temp)
{
printf("%i\n", temp->n);
temp = temp->next;
nodes++;
}
return (nodes);
}
