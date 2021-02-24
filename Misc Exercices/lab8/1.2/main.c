#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
	int z[31];
//	sir luna;
	int n=0,M,m;
	FILE *scriere;
	scriere=fopen("file.out","w");
	if(scriere==0)
	{
		printf("error");
		exit(EXIT_FAILURE);
	}

	citire(z,n);
	M=maxim(z,n);
	m=minim(z,n);
	printf("temp max=%d\n",M);
	printf("temp min=%d\n",m);
	fprintf(scriere,"Temperatura maxima fost: %d\n",M);
	fprintf(scriere,"Temperatura minima a fost: %d",m);
	
	return 0;
}
