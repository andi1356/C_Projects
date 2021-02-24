#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
	int *a=0;
	int n;
	FILE *f;
	f=fopen("unu.in","r");
	if(f==0)
	{
		printf("eroare la citire din fisier");
		exit(1);
	}
	fscanf(f,"%d",&n);
	a=(int*)malloc(n*sizeof(int));
	citireVectorP(f,a,n);
	afisareVectorP(a,n);
	fclose(f);
	free(a);
	a=0;
	return 0;
}

