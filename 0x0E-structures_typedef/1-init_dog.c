#include "dog.h"
/**
 * init_dog - Initialize a dog a structure
 * @d: Dog a variable to initialize
 * @name: use to initialize the dog name
 * @age:  use to initilize the dog age
 * @owner: Use to initialize the owner of the dog
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return (void);
d->name = name;
d->age = age;
d->owner = owner;
}
