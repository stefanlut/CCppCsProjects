#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct $
{
	int number;
	char code;
} item_t;

item_t package1 = {123,'g'},
newpack;
newpack = packag1;
newpack.number = 345;