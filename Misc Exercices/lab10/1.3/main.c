#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
	double *a=0,*b=0,*s=0;
	int n;
	printf("nr de el:");
	scanf("%d",&n);
	a=(double*)malloc(n*sizeof(double));
	b=(double*)malloc(n*sizeof(double));
	printf("citireI\n");
	citireVectorP(a,n);
	printf("citireII\n");
	citireVectorP(b,n);
	printf("vectorI\n");
	afisareVectorP(a,n);
	printf("vectorII\n");
	afisareVectorP(b,n);
	s=sumaVectori(a,b,n);
	printf("suma vectorilor este:\n");
	afisareVectorP(s,n);
	return 0;
}
