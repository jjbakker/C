#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};


struct Person *Person_create(char *name, int age, int height, int weight) {

    struct Person *who = malloc(sizeof(struct Person));
    assert (who != NULL);

    who->name = strdup(name);
    who->age = age;
    who->height = height;
    who -> weight = weight;

    return who;

}


void Person_destroy(struct Person *who) {
    
    assert(who != NULL);

    free(who->name);
    free(who);

}

void Person_print(struct Person *who) {

    printf("Name  : %s\n", who->name);
    printf("Age   : %d\n", who-> age);
    printf("Height: %d\n", who->height);    
    printf("Weight: %d\n", who->weight);

}

int main(int argc, char *argv[]) {

    // make 2 structs
    struct Person *joe = Person_create("Joe Average", 56, 183, 84);
    struct Person *frank = Person_create("Frank Anders", 45, 177, 88);

    printf("Joe is at memory location %p\n", joe);
    Person_print(joe);
    printf("Frank is at memory location %p\n", frank);
    Person_print(frank);

    printf("Sizeoff joe = %ld\n", sizeof(joe));
    printf("Sizeoff joe=>name = %ld\n", sizeof(joe->name));


    // change values
    joe->age += 5;
    Person_print(joe);

    frank->age += 10;
    Person_print(frank);

    Person_destroy(joe);
    Person_destroy(frank);


    return 0;

}



