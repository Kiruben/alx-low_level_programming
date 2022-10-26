#include "lists.h"

/**
 *listint_len - prototype function
 *Description: count elements in list
 *@h: list to count
 *Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
unsigned int nodes = 0;
const listint_t *temp = h;
while (temp)
{
temp = temp->next;
nodes++;
}
return (nodes);
}
