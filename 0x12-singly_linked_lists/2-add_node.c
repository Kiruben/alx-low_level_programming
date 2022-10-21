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
if (ptr == NULL)
{
return (NULL);
}
ptr->str = temp_str;
ptr->len = strlen(temp_str);
ptr->next = *head;
*head = ptr;
return (*head);
}
