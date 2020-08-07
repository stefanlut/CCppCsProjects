#include <stdio.h>
#include <math.h>

#define e 2.71828
#define k 0.0367
#define t 20
int main()
{
float T,A,Tf;

printf("Enter the initial and surrounding temperatures: ");
scanf("%f %f",&T,&A);

Tf = (T-A)*pow(e,(-k*t)) + A;
printf("The final temperature is %.2f\n",Tf);

   return 0;
}
