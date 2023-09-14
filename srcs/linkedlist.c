/*

linkedlist.c

Linked list methods from past assignment. 

*/

#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

void print_list (list_element *head) {
    while (head) {
        printf("%s\n", head->element);
        head = head->next;
    }
}

void free_list (list_element *head) {
    while (head) {
        list_element *temp = head;
        head = head->next;
        free(temp->element);
        free(temp);
    }
}
