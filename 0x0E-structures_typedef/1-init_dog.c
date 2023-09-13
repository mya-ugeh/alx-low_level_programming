#include <stdio.h>
#include "dog.h"

/**
  * init_dog - main
  @d: dog
  @name: name of dog
  @age : age of dog
  @owner: owner of dog
  *
  * Description: initialize a variable of type struct dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
