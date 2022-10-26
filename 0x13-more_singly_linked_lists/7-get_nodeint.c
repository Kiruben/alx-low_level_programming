#include "lists.h"
/**
 *get_nodeint_at_index - prototype function
 *Description: return the nth node of linked list
 *@head: pointer to a list
 *@index: index of node to return
 *Return: node at index or 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
if (head == NULL)
{
return (0);
}
else
{
unsigned int count = 0;
listint_t *temp = head;
while (temp)
{
if (count == index)
{
return (temp);
}
count++;
temp = temp->next;
}
return (NULL);
}
}
