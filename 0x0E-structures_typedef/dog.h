#ifndef DOG
#define DOG
/**
 * struct dog - Short description
 * @name: Name dog
 * @age: age dog
 * @owner: owner dog
 *
 * Description: date dog
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
void free_dog(dog_
#endif

