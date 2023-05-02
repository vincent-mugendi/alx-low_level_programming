This directory contains Alx 0x13. C - More singly linked lists Tasks

Task 0. Print list
A function was created that  prints all the elements of a listint_t list.
Extra Information
Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes
Format: see example
You are allowed to use printf



Task 1. List length
A function was created that returns the number of elements in a linked listint_t list
Extra Information
Prototype: size_t listint_len(const listint_t *h);


Task 2. Add node
A function was created that  adds a new node at the beginning of a listint_t list.
Extra Information
Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed


Task 3. Add node at the end
A function was created that adds a new node at the end of a listint_t list.
Extra Information
Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed



Task 4. Free list
A function was created that  frees a listint_t list.
Extra Information
Prototype: void free_listint(listint_t *head);

Task 5. Free
A functuion was created that frees a listint_t list.
Extra Information
Prototype: void free_listint2(listint_t **head);
The function sets the head to NULL



Task 6. Pop
A function that deletes the head node of a listint_t linked list, and returns the head node’s data (n) was created
Extra Information
Prototype: int pop_listint(listint_t **head);
if the linked list is empty return 0








Task 7. Get node at index
A function was created that returns the nth node of a listint_t linked list.
Extra Information
Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
where index is the index of the node, starting at 0
if the node does not exist, return NULL




Task 8. Sum list
A function that returns the sum of all the data (n) of a listint_t linked list was created 
Extra Information
Prototype: int sum_listint(listint_t *head);
if the list is empty, return 0



Task 9. Insert
Writes  a function that inserts a new node at a given position.
Extra Information
Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL


Task 10. Delete at index
Writes a function that deletes the node at index index of a listint_t linked list.
Extra Information
Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed



