#ifndef DOG_H
#define DOG_H

/**
 * struct dog - describe a dog
 * @name: the name of the dog
 * @age: desribes the age of the dog
 * @owner: the owner of the dog
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

/**
 * init_dog - function to initialize dog structure
 * @d: a pointer towards the dog structure to be initialized
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the doig
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
#endif
