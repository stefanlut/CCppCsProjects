#include <stdio.h>
#include <math.h>
void callfunc(void);
void calc(int,int);
void prints(int,int);
    int Tc,
    Th,
    Rcp,
    Hcp;

int main()
{
callfunc();
calc(Tc,Th);
prints(Rcp,Hcp);
return 0;

}

void callfunc(void)
{
    printf("The Tc value is: \n");
    scanf("%d",&Tc);
    fflush(stdin);
    printf("The Th value is: \n");
    scanf("%d",&Th);
    fflush(stdin);


}
void calc(int Th, int Tc)
{
Rcp = Tc/(Th-Tc);
Hcp = Th/(Th-Tc);


}

void prints(Rcp,Hcp)
{
    printf("The coefficient of performance of refrigeration is: %d\n",Rcp);
printf("The coefficient of performance of heating is: %d\n",Hcp);

}