#include <stdio.h>
#include "header.h"
int main()
{
	SIR a,b;
	int n,m;
	printf("Elementele sirului sunt: ");
	scanf("%d",&n);
	citire(a,n);
	afisare(a,n);
	distinct(a,b,n);
	printf("sirul distinct:\n");
	afisare(b,n);
	m=distinct(a,b,n);
	printf("\tNumarul de elemente din sir este: %d\n",m);

	return 0;
}
