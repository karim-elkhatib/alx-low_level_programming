#include "dog.h"

/**
 * init_dog - check the code
 * @d: arg
 * @name: arg
 * @age: arg
 * @owner: arg
 * Return: no.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
