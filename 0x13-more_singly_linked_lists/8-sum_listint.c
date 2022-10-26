#include "lists.h"
/**
 *sum_listint - prototype function
 *Description: adds data of linked list
 *@head: pointer to a list
 *Return: sum of linked list data or 0 if empty
 */
int sum_listint(listint_t *head)
{
if (head == NULL)
{
return (0);
}
else
{
int sum = 0;
listint_t *temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
}
