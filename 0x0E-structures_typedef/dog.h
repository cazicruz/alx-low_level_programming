#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Entry point of code
 * @name: variables
 * @owner: vriable
 * @age: variable
 */

typedef struct dog 
{
	char *name;
	char *owner;
	float age;
} dog;
/**
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
*/
#endif
