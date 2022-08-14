/**
 * free_dog - Release the dog heap memory
 * @d : location to release memory
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
free(d);
}
