#include "lists.h"
/**
 *delete_nodeint_at_index - prototype function
 *Description: deletes node at given index
 *@head: A pointer to list
 *@index: node to delete
 *Return: 1 if succeeded, or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp_head, *temp_node;
unsigned int count = 1;
if (*head == NULL)
return (-1);
temp_head = *head;
if (index == 0)
{
*head = (*head)->next;
free(temp_head);
}
else
{
while (count < index)
{
temp_head = temp_head->next;
if (temp_head == NULL)
return (-1);
count++;
}
temp_node = temp_head;
temp_node = temp_node->next;
temp_head->next = temp_node->next;
free(temp_node);
}
return (1);
}

