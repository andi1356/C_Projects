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

void afisareVectorP(double *y,int n)
{
	int i;
	for(i=0;i<n;++i)
	{
		printf("v[%d]=[%lf]\n",i,y[i]);
	}
}

double *sumaVectori(double *x,double *y,int n)
{
	double *s=0;
	s=(double*)malloc(n*sizeof(double));
	if(!s)
	{
		printf("eroare la alocare");
		exit(EXIT_FAILURE);
	}
	int i;
	for(i=0;i<n;++i)
	{
		s[i]=x[i]+y[i];
	}
	return s;
}

