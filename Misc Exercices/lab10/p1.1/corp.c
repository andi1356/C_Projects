#include <stdio.h>
#include "header.h"

void citireVectorP(FILE *f,int*a,int n)
{
	int i;
	for(i=0;i<n;++i)
	{
		fscanf(f,"%d",&a[i]);
	}
}

void afisareVectorP(int *a,int n)
{
	int i;
	for(i=0;i<n;++i)
	{
		printf("%d",a[i]);
	}
}
