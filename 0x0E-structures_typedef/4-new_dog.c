#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
  * @name: new dog's name
  * @age: new dog's age
  * @owner: new dog's owner
  * Return: pointer to new dog struct
 **/
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
