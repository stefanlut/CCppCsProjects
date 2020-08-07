#include <stdio.h>
#include <math.h>
int main()

{
float avg,
runsum = 0,
in;
int i=0;
int * pIn = &in;
printf("Enter the first quiz grade:  \n");
while(scanf("%f",pIn)==1)
{
	runsum+=in;
	i++;
	printf("Enter the next quiz grade: ");

}
avg=runsum/i;
printf("The average is %.2f\n",avg);
printf("%d quizzes have been graded\n",i);
}