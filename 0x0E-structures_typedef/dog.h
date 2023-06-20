#ifndef DOG_H
#define DOG_H


/**
 * struct dog - structure of 3 members
 * @name: first member
 * @owner: second member
 * @age: third member
 * dog_t - Typedef of struct dog
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif /* DOG_H */
