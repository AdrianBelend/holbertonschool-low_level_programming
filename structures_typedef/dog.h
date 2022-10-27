#ifndef HEADER_FILE
#define HEADER_FILE dog.h
/**
 * struct dog - Define struct
 * @name: char *
 * @age: float
 * @owner: char *
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
#endif