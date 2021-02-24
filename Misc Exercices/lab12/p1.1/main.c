#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
	COMPLEX *x=0,*y=0,*z=0;
	x=(COMPLEX*)malloc(sizeof(COMPLEX));
	y=(COMPLEX*)malloc(sizeof(COMPLEX));
	puts("Primul nr:");
	citire(x);
	puts("Al doilea nr");
	citire(y);
	
	x->real=3.5*x->real+1;
	z=inmultire(x,y);
	afisare(z);
	return 0;
}
