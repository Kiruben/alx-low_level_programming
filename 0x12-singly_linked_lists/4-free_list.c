#include "lists.h"

/**
 *free_list - prototype function
 *Description: frees all elements in a linked list
 *@head: pointer to list
 *Return: void
 */
void free_list(list_t *head)
{
list_t *temp;
temp = head;
while (head)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
free(head);
}
