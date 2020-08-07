#include <stdio.h>

void changeit(char *);
void changeittoo(char *);

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
    changeit(&cptr);
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
void changeittoo(char **fncptr)
{
printf("The char is %c\n", *fncptr);
    fncptr = (char *) malloc(sizeof(char));
    *fncptr = '3';
    
}
