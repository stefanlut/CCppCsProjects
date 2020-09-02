#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct linked_list{

    char name[15];
    int age;

    struct linked_list * next;
} linklist;

typedef linklist * pLinkList;

pLinkList first = NULL, 
last = NULL, 
current;


int main(){

    first = (pLinkList) malloc(sizeof(linklist));
    last = first;
    printf("Please enter a first name: ");
    scanf("%s",last -> name );
    last -> age = 21;
    last -> next = NULL;

    last -> next = (pLinkList) malloc(sizeof(linklist));
    last = last -> next;



    return 0;
}