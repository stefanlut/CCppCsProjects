#include <stdio.h>
#include <stdlib.h>

void trav_and_print(void);

typedef struct linked_list
{
   int data;
   struct linked_list *next;
}   element;
int a;
typedef element * elementptr;
  elementptr first = NULL,
            last = NULL,
            current;
            

int main()
{


   /* Create a linked list with one element            */
   /* NOTE: the first element is always a special case */

   first = (elementptr) malloc(sizeof(element));
   last = first;
   last -> data = 5;
   last -> next = NULL;

   /* Add another element to the end of the list */

   last -> next = (elementptr) malloc(sizeof(element));
   last = last -> next;
   last -> data = 12;
   last -> next = NULL;

   last -> next = (elementptr) malloc(sizeof(element));
last = last -> next;
printf("Enter a number: ");
scanf("%d\n",&a);
fflush(stdin);
last -> next = (elementptr) malloc(sizeof(element));
   last = last -> next;
   last -> data = a;
   last -> next = NULL;
   printf("Number added is %d \n",last -> data);

trav_and_print();
   free(first);
   free(last);

   return 0;
}

void trav_and_print(void)
{

   current = first;
   while (current!=NULL)
   {
      printf("The data value is %d\n",current -> data);
      current = current -> next;
   }
}