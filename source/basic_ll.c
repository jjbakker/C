#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct for ll
struct node {
    int value;             // data stored
    struct node *next;     // pointer to next node
};


// function to add a node to the list, returns pointer to new struct node
struct node *add_to_list(struct node *list, int n) {
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Error: malloc failed");
        exit(EXIT_FAILURE);
    }
    // initialize value
    new_node->value = n;
    new_node->next = list;
    return new_node;
}


// function to get a specific value from the linked list
// returns pointer when found
struct node *search_list(struct node *list, int n) {
    // go through all the nodes
    while (list!=NULL && list->value !=n) {
        list = list->next;
    }
    return list;
}




int main(int argc, char *argv[]) {
// generic intro
printf("Running \"%s\", compiled on %s - %s\n", argv[0], __DATE__,__TIME__);

// first node, set to NULL
struct node *first = NULL;

// create first node
// pointer to use, and malloc to get the memory, initialize data
struct node *new_node;
new_node = malloc(sizeof(struct node));
(*new_node).value = 10;   //nrackets for give prio to operator *
new_node->value = 10;     // alternative way for assignment   

printf("New node at address %p and value %d\n", new_node, new_node->value);


// add a new node at beginning of list

new_node->next = first;                 // NULL
first = new_node;                       // first points now to first node (10)
new_node = malloc(sizeof(struct node)); // create second node
new_node->value = 20;                   // initialize value
new_node->next = first;                 // set pointer in new_node to first
first = new_node;                       // set first back to first node (= new node)

printf("node 1 at address %p and value %d\n", first, first->value);
printf("node 2 at address %p and value %d\n", new_node, new_node->value);
printf("node 2 at address %p and next %p\n", new_node, new_node->next);

first = add_to_list(first, 30);
first = add_to_list(first, 40);

printf("node 1 at address %p with value %d and next %p\n", first, first->value, first->next);
printf("node 2 at address %p with value %d and next %p\n", first->next, first->next->value, first->next->next);
printf("node 3 at address %p with value %d and next %p\n", first->next->next, first->next->next->value, first->next->next->next);

// find value 20
printf("Found value on address %p\n", search_list(first, 40));

return 0;
}
