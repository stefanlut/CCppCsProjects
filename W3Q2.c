#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	char astring[10] = "Hello";
	char bstring[4] = {'h','i','\0'};
	char mystring;
printf("%s\n",astring);
printf("%s\n",bstring);
printf(" \n");
scanf("%s",&mystring);
strcat(bstring,astring);
strlen(bstring);
strcmp(astring,bstring);

return 0;
}