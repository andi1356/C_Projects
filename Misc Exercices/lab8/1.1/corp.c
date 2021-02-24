#include <stdio.h>

#include "header.h"

void citire(int v[],int n)
{
	int i;
	for(i=0;i<n;++i)
	{
		printf("v[%d]=",i);
		scanf("%d",&v[i]);
	}
}

int suma(int v[],int n)
{
	int i,s=0;
	for(i=0;i<n;++i)
	{
		s=s+v[i];
	}
	return s;
}

