#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure for a basic dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Description: data structure for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
typedef struct dog dog_t;
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);
#endif
