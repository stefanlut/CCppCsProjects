#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


#define PI 3.14159
int main(){

    char let;
    float num;

    printf("Enter a character then a number: ");
    scanf("%c%f",&let,&num);

    printf("The char is %c.\n",let);
    printf("The num is %.1f.\n",num);

    fflush(stdin);
    printf("Now enter another character: ");
    scanf("%c",&let);
    printf("\nThe character is %c.\n",let);

    return 0;
}