#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Stack{
    int top;
    unsigned capacity;
    int* array;

};

struct Stack* createStack(unsigned capacity){

    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
};

int isFull(struct Stack* stack)
{
    
    return stack->top == stack->capacity - 1;


}

int isEmpty(struct Stack* stack){


    return stack->top == -1;

}


void push(struct Stack* stack, int item) 
{ 
    if (isFull(stack)) {

        printf("\nStack Overflow!\n");
        return;
    }
         
    stack->array[++stack->top] = item; 
    printf("%d pushed to stack\n", item); 
} 
  
// Function to remove an item from stack.  It decreases top by 1 
int pop(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        {
            printf("\nStack Underflow!\n");
            return INT_MIN; 
        }
    return stack->array[stack->top--]; 
} 
  
// Function to return the top from stack without removing it 
int peek(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return INT_MIN; 
    return stack->array[stack->top]; 
} 

int main(){

    struct Stack* stack = createStack(2);

    push(stack, 10); 
    push(stack, 20); 
    push(stack, 30); 
    
    printf("%d popped from stack\n", pop(stack)); 
  
    return 0;
}