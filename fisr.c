#include <stdio.h>


float fastRoot(float number){
    long i;
    float x2,y;
    const float threehalves = 1.5F;

    x2 = number * 0.5F;
    y = number;
    i = *(long *) &y;
    i = 0x5f3659df - (i >> 1);
    y = * (float *) &i;
    y = y *(threehalves - (x2 * y * y));

    return y;
}

int main(){
    printf("Our result is %f\n",fastRoot(4.0F));

    return 0;
}