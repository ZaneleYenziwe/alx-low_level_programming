5-free_dog.c
#include <dog.h>
#include <stdlib.h>

/**
 * free_dog-frees dogs.
 * @d:The dog to be freed.
 */
void free_dog(dog_t*d)
{
	if (d==NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
dod.h
#ifndef DOG_H
#define DOG_H
/**
 * struct dog-A new type describing dog.
 * @name:The name of the dog
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
struct dog
{
	char*name;
        float age;
	char*owner;
};

/**
 * dog_t-Typedef for struct dog
 */
typedef struct dog dog_t;

void init_ddog(struct dog *d,char *name,float age, char*owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name,float age,char *owner);
#endif

