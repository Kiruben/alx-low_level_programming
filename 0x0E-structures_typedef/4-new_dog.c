#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - prototype function
 *Description: creates a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: returns a pointer to newly created dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *temp_name, *temp_owner;
int size_name = 0, size_owner = 0, i;
if (name == NULL || owner == NULL)
return (NULL);
while (name[size_name])
size_name++;
while (owner[size_owner])
size_owner++;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
temp_name = malloc(size_name + 1);
if (temp_name == NULL)
return (NULL);
for (i = 0; name[i]; i++)
temp_name[i] = name[i];
temp_name[i] = '\0';
temp_owner = malloc(size_owner + 1);
if (temp_owner == NULL)
return (NULL);
for (i = 0; owner[i]; i++)
temp_owner[i] = owner[i];
temp_owner[i] = '\0';
new_dog->name = temp_name;
new_dog->age = age;
new_dog->owner = temp_owner;
return (new_dog);
}
