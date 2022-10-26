#include "lists.h"
/**
 *free_listint - prototype function
 *Description: frees a list
 *@head: pointer to a list
 *Return: void
 */
void free_listint(listint_t *head)
{
listint_t *temp = head;
while (temp != NULL)
{
temp = temp->next;
free(head);
head = temp;
}
}
