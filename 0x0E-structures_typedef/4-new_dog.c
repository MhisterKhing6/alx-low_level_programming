#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a dog
 * @name: name of the new dog
 * @age : age of the dog
 * @owner : owner of the dog
 * Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newD = malloc(sizeof(dog_t));
if (newD == NULL)
return (NULL);
newD->name = name;
newD->age = age;
newD->owner = owner;
return (newD);
}
