//Author: Vincent M. Mugendi//

This directory contains Alx 0x0E. C - Structures, typedef tasks

Task 0. Poppy
Creates a header file that defines a new type of struct callde dog with elements:
	1. char *name[];
	2. float age;
	3. char *owner;

Task 1. A dog is the only thing on earth that loves you more than you love yourself
Created a c file with a function that initializes a varibale tyoe struct dog
Extra instructions
Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);


Task 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
Created a c program with a function that prints a struct dog
Extra Instructions
Prototype: void print_dog(struct dog *d);
Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.



Task 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
Created a header file that defines a new type dog_t as a new name for the type struct dog


Task 4. A door is what a dog is perpetually on the wrong side of
Created a c program with a function that creates a new dog
Extra Instructions
Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails



Task 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
Created a c program with a function that frees dogs
Extra Instructions
Prototype: void free_dog(dog_t *d);
