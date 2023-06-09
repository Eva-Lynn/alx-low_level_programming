#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog element
 * @owner: Dog's owner
 * @name: Dog's name
 * @age: Dog's age
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

int _strlen(char *s);

int *_strcpy(char *dest, char *src);
#endif
