#include "lists.h"
/**
 *pop_listint - prototype function
 *Description: deletes head of node
 *@head: pointer to a list
 *Return: head nodes data
 */
int pop_listint(listint_t **head)
{
if (*head == NULL)
{
return (0);
}
else
{
listint_t *temp = *head;
int temp_n = temp->n;
*head = temp->next;
free(temp);
temp = NULL;
return (temp_n);
}
}
