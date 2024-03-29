#ifndef DOG_H
#define DOG_H
/**
 * struct dog- structure definition for a dog
 * @name: name of the dog
 * @age: the dog's age
 * @owner: the dog's owner
 * Description: a structure for the details of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
