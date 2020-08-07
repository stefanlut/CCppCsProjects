#include <stdio.h>
#include <stdlib.h>
void changeit(char *);

void changeit2(char **);

int main()
{
    char letter,
         symbol = '!',
         *cptr;
    
    cptr = &letter;
    *cptr = 'w';
    printf("*cptr is %c\n", *cptr);
    printf("letter is %c\n", letter);
    printf("symbol is %c\n\n", symbol);

    cptr = &symbol;
    printf("*cptr is %c\n", *cptr);
    printf("letter is %c\n", letter);
    printf("symbol is %c\n\n", symbol);
    
    *cptr = 'x';
    printf("*cptr is %c\n", *cptr);
    printf("letter is %c\n", letter);
    printf("symbol is %c\n\n", symbol);
    
    cptr = (char *) malloc(sizeof(char));
    *cptr = '8';
    printf("*cptr is %c\n", *cptr);
    printf("letter is %c\n", letter);
    printf("symbol is %c\n", symbol);

    changeit(cptr);
    changeit2(&cptr);
    printf("*cptr is %c\n", *cptr);
    free(cptr);
    return 0;
}

void changeit(char *fncptr)
{
    printf("The char is %c\n", *fncptr);
    fncptr = (char *) malloc(sizeof(char));
    *fncptr = '3';
}
void changeit2(char **fncptr)
{
printf("The char is %s\n", *fncptr);
    fncptr = (char *) malloc(sizeof(char));
    *fncptr = '3';
    
}
