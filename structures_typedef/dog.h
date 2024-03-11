#ifndef DOG_H
#define DOG_H
/**
 * struct dog_t - the structure defines three types.
 * @name: name of dog
 * @age: age of dog
 * @owner: who owns the dog
 */

struct dog_t
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
