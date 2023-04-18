#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: input dog name
 * @age: input dog age
 * @owner: input dog name owner
 *
 * Description : Define a new type struct dog
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
