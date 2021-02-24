#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void citireVectorP(double *x,int n)
{
	int i;
	for(i=0;i<n;++i)
	{
		scanf("%lf",&x[i]);
	}
}

void afisareVectorP(double *x,int n)
{
	int i;
	for(i=0;i<n;++i)
	{
		printf("%5.3lf\n",x[i]);
	}
}

double *sumaVectori(double *x,double *y,int n)
{
	double *s=0;
	s=(double*)malloc(n*sizeof(double));
	if(!s)
	{
		printf("eroare la alocarea de memorie a sumei");
		exit(1);
	}
	int i;
	for(i=0;i<n;++i)
	{
		s[i]=x[i]+y[i];
	}
	return s;
}
