/* source file for ptr11c10
 *
 * an example program from, Kochan, Stephen, "Programming in C 3rd ed."
 *
 * Create a linked list, find a value within that list.
 *
 */

#include <stdio.h>

struct entry {
    int value;
    struct entry *next;
};

struct entry *find_entry(struct entry *list_ptr, int match);

int main(void){
    struct entry n1, n2, n3;
    struct entry *list_ptr, *list_start = &n1;
    int search;

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = (struct entry *) 0;

    printf("Enter number to locate: ");
    scanf("%i", &search);

    list_ptr = find_entry(list_start, search);

    if(list_ptr != (struct entry *) 0)
        printf("Found %i.\n", list_ptr->value);
    else
        printf("Not found.\n");

    return(0);

}


struct entry *find_entry(struct entry *list_ptr, int match){

    while(list_ptr != (struct entry *) 0){
        if(list_ptr->value == match)
            return(list_ptr);
        else
            list_ptr = list_ptr->next;
    }

    return((struct entry *) 0);
}

