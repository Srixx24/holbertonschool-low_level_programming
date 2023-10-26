#ifndef _HEADER_
#define _HEADER_
/**
 * struct dog - info on dog
 *
 * @name: the dogs name
 * @age: the dogs age
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);


#endif
