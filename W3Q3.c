#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#define N 8
#define M 4
int main()
{
	srand(time(NULL));
	int array[N][M];
	int i,
	avg = 0,
	j;
	for (i=0;i<N;i++)
	{
		for (j=0;j<M;j++)
		{
			array[i][j] = rand()%101;
			avg = avg + array[i][j];

		}

	}
	printf("%d\n",avg);
}