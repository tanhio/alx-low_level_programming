/**
 * struct dog - holds info about a dog
 * @name: first variable
 * @age: second variable
 * @owner: third variable
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}
/*
 * dog_t - the typedef for the struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
