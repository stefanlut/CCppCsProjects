#include <stdio.h>
#include <math.h>
#define pi 3.14159

float carnot(float,float);
void prints(float);

int main()
{
float htemp,
ctemp,
ce;
printf("Enter a hot temperature: \n");
scanf("%f",&htemp);
fflush(stdin);
printf("Enter a cold temperature: \n");
scanf("%f",&ctemp);
ce = carnot(htemp,ctemp);
prints(ce);
return 0;
}

float carnot(float htemp,float ctemp)
{

	return 1 - (ctemp/htemp);
}

void prints(float ce)
{
	printf("The carnot efficiency is %.3f\n",ce);
}