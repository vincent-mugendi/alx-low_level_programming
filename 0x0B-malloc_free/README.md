This directory contains ALx 0x0B. C - malloc, free Tasks

Task 0:  Float like a butterfly, sting like a bee
A function that creates an array f chars, and initializes it with a specif char is created
Instructions
Prototype: char *create_array(unsigned int size, char c);
Returns NULL if size = 0
Returns a pointer to the array, or NULL if it fails


Task 1:  The woman who has no imagination has no wings
A function that returns a pointer to a newly allocated space in memory and which contains a copy of the string given as a parameter is created

Instructions
Prototype: char *_strdup(char *str);
The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
Returns NULL if str = NULL
On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available


Task 2: He who is not courageous enough to take risks will accomplish nothing in life
A function that concatenates two strings is created

Extra Instructions
Prototype: char *str_concat(char *s1, char *s2);
The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
if NULL is passed, treat it as an empty string
The function should return NULL on failure


Task 3:  If you even dream of beating me you'd better wake up and apologize
A function that returns a pointer to a 2 dimensional array of integers

Extra Instructions
Prototype: int **alloc_grid(int width, int height);
Each element of the grid should be initialized to 0
The function should return NULL on failure
If width or height is 0 or negative, return NULL


Task 4: It's not bragging if you can back it up
A function that fress a 2 dimensional grid previous;y created by your alloc_grid function is created

Extra Instructions
Prototype: void free_grid(int **grid, int height);
Note that we will compile with your alloc_grid.c file. Make sure it compiles.

Task 5:
A function that concatenates all the arguments of the program was created

Extra instructions
Prototype: char *argstostr(int ac, char **av);
Returns NULL if ac == 0 or av == NULL
Returns a pointer to a new string, or NULL if it fails
Each argument should be followed by a \n in the new string


Task 6:
A function that splits a string into words was created

Extra instructions
Prototype: char **strtow(char *str);
The function returns a pointer to an array of strings (words)
Each element of this array should contain a single word, null-terminated
The last element of the returned array should be NULL
Words are separated by spaces
Returns NULL if str == NULL or str == ""
If your function fails, it should return NULL
