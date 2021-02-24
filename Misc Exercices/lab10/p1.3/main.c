#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
	int n;
	printf("nr de el:");
	scanf("%d",&n);
	double *x=0,*y=0,*s=0;
	x=(double*)malloc(n*sizeof(double));
	y=(double*)malloc(n*sizeof(double));
	if(!x||!y)
	{
		printf("eroare la alocare de memorie a vectorilor");
		exit(1);
	}


	printf("primul vector este:\n");
	citireVectorP(x,n);
	printf("al doilea vector este:\n");
	citireVectorP(y,n);
	s=sumaVectori(x,y,n);
	afisareVectorP(s,n);
	free(s);
	s=0;
	free(x);
	x=0;
	free(y);
	y=0;
	return 0;
}

