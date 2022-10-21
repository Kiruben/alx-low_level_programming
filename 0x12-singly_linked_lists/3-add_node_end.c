#include "lists.h"
/**
 *add_node_end - prototype function
 *Description: adds node at end of list
 *@head: pointer to a list
 *@str: string to add as data
 *Return: pointer to new head of list, NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *temp, *ptr;
unsigned int count = 0;
temp = malloc(sizeof(list_t));
if (temp == NULL)
{
return (NULL);
}
while (str[count])
{
count++;
}
temp->str = strdup(str);
temp->len = count;
temp->next = NULL;
if (*head == NULL)
{
*head = temp;
}
else
{
ptr = *head;
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = temp;
}
return (temp);
}
