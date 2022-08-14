#ifndef DOG_H
#define DOG_H
/**
 * struct dog- Provde template for a dog  name, age, owner
 * @name : nam of the dog
 * @age  : age of the dog
 * @owner: Owner of the dog
 * Description - Provide template for a dog,
 * name is a string, age is a float , owner is string
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);
#endif
