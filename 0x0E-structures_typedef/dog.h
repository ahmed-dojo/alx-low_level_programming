#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A description of dog
 * @name: first field for doggy's cute name
 * @age: doggy's age
 * @owner: The doggy's lucky owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog;
#endif