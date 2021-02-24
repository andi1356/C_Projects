#include <stdio.h>
#include <stdlib.h>
#include "p13.h"

int citireVector(int v[],FILE *f)
{
	int i=0;
	while((i<SIZE)&&fscanf(f,"%d",&v[i]))
	{
		++i;
	}
	return i;
}

