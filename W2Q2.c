#include <stdio.h>
#include <math.h>

int main()

{
int choice;
int * pChoice = &choice;
printf("Main Menu \n\n");
printf("1.  Hello\n");
printf("2.  Hi\n");
printf("3.  Hola\n");

printf("Please enter a choice: \n\n");
scanf("%d",pChoice);

switch (choice)
{
case 1:
printf("Hello\n");
break;
case 2:
printf("Hi\n");
break;
case 3:
printf("Hola\n");
break;
default:
printf("not acceptable\n");
break;
}




return 0;
}