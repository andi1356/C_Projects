#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
	double miere[25];
	int n;
	int s;
	n=citesteProductie(miere);
	afiseazaProductie(miere,n);
	s=minim(miere,n);
	printf("minimul productiei se afla in stupul:%d\n",s);
	return 0;
}
