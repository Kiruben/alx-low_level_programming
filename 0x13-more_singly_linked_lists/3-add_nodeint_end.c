#include "lists.h"

/**
 *add_nodeint_end- prototype function
 *Description: adds element to end of list
 *@head: begining of list
 *@n: data to add
 *Return: address of new elemtn or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp_head = *head;
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
while (temp_head->next)
{
temp_head = temp_head->next;
}
temp_head->next = new_node;
}
return (new_node);
}
