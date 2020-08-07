#include <stdio.h>
#include <stdlib.h>

int num,
*intptr;
char let,
*chptr;
void callfunc(int *, char *);

int main()
{
intptr = &num;
chptr = &let;
	callfunc(intptr,chptr);


	return 0;
}


void callfunc(int *num, char *let)
{

	
}