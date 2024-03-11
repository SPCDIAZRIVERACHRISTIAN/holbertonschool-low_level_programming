#ifndef DOG_H
#define DOG_H
/**
 * struct dog - the structure defines three types.
 * @name: name of dog
 * @age: age of dog
 * @owner: who owns the dog
 */

struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
    /* dog_t - type def for structure */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
