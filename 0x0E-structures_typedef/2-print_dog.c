#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Print the values in dog template
 * @d : Dog template to print
 * Return - Nothing
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\nAge: %f\nOwner: %s",
((d-> name == NULL) ? "(nil)" : d->name),
(d->age),
((d-> owner == NULL) ? "(nil)" : d->owner));
}
}
