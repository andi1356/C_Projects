#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int citesteProductie(double miere[25])
{
	int n;
	printf("Numarul de stupi este:\n");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;++i)
	{
		printf("prod[%d]=",i);
		scanf("%lf",&miere[i]);
	}
	return n;
}

void afiseazaProductie(double miere[25],int n)
{
	int i;
	printf("elementele vectorului sunt:\n");
	for(i=0;i<n;++i)
	{
		printf("prod[%d]=%10.2lf\n",i,miere[i]);
	}
}

int minim(double miere[25],int n)
{
	int i,s=0;
	double min=miere[0];
	for(i=1;i<n;++i)
	{
		if(miere[i]<min)
		{
		min=miere[i];
		s=i;
		}
	}
	return s;
}
