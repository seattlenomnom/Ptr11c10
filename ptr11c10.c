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

