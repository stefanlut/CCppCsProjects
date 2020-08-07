#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int main()
{
srand(time(NULL)); 

int array[8],
i = 0;
for (i=0;i<8;i++){
array[i]=rand()%10 + 1;
printf("%d  ",array[i]); 
}
printf("\n");
for (i = 7;i>(-1);i--){
	printf("%d ",array[i]);
}
printf("\n");
;


return 0;
}