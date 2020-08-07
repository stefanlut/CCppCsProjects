#include <stdio.h>
#include <math.h>
void callfunc(void);
void calc(float,float,float);
void discriminant(float,float,float);
void prints(float,float);
float a,
b,
c,
D,
x1,
x2;
int main()
{
    callfunc();
    discriminant(a,b,c);
    calc(a,b,D);
    prints(x1,x2);
    return 0;
    
}

void callfunc(void)
{
    printf("The a value is: \n");
    scanf("%f",&a);
    fflush(stdin);
    printf("The b value is: \n");
    scanf("%f",&b);
    fflush(stdin);
    printf("The c value is: \n");
    scanf("%f",&c);
    fflush(stdin);
    
    
}
void discriminant(float a, float b, float c)
{
    D = b*b - (4 * a * c);
   
    
    printf("%f\n",D);
}
void calc(float a, float b, float D)
{
    x1 = (-b + sqrt(D))/(2*a);
    x2 = (-b - sqrt(D))/(2*a);
    printf("%f\n%f\n",x1,x2);
}

void prints(float x1,float x2)
{
    printf("The first root is: %f\n",x1);
    printf("The second root is: %f\n",x2);
    
}
