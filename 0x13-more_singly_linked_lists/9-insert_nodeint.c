#include "lists.h"
/**
 *insert_nodeint_at_index - prototype function
 *Description: inserts new node at given position
 *@head: pointer to a list
 *@idx: position to insert into
 *@n:data to add
 *Return: new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
if (head == NULL)
{
return (NULL);
}
else
{
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
else
{
listint_t *temp_head = *head;
unsigned int count = 0;
new_node->n = n;
if (*head == NULL)
{
*head = new_node;
new_node->next = NULL;
return (new_node);
}
else if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
else
{
while (temp_head)
{
if (count == (idx - 1))
{
new_node->next = temp_head->next;
temp_head->next = new_node;
return (new_node);
}
count++;
temp_head = temp_head->next;
}
}
return (NULL);
}
}
}
