#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
	int n;
	printf("nr de el:");
	scanf("%d",&n);
	COMPLEX *x=0,*z=0;
	x=citireSir(x,n);
	afisareSir(x,n);
	sumaIndice(x,n);

	printf("\n\ntesting:\n\n\n");
	COMPLEX a,b;
	COMPLEX s;
	citire(&a);
	citire(&b);
	s=adunare(&a,&b);
	afisare(&s);

	
	

	return 0;
}
