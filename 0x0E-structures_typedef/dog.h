#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure
 * @name: char
 * @age: int
 * @owner: char
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - def for dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);

#endif
