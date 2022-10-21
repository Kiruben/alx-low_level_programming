#include "lists.h"

/**
 *add_node - prototype function
 *Description: adds nodes to begining of list
 *@head: list to add too
 *@str: data for node
 *Return: address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
char *temp_str = strdup(str);
list_t *ptr = malloc(sizeof(list_t));
unsigned int count = 0;
if (ptr == NULL)
{
return (NULL);
}
while (str[count])
count++;
ptr->str = temp_str;
ptr->len = count;
ptr->next = *head;
*head = ptr;
return (*head);
}
