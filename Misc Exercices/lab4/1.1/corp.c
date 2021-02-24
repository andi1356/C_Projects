#include <stdio.h>
#include "header.h"

void citire(int m[],int n)
{
	int i;
	for(i=0;i<n;++i)
	{
		printf("v[%d]=",i);
		scanf("%d",&m[i]);
	}
}

void afisare(int m[],int n)
{
	int i;
	printf("(");
	for(i=0;i<n;++i)
	{
		printf("%d, ",m[i]);
	}
	printf(")\n");
}

void suma(int Ma[],int Mb[],int Ms[], int n)
{
	int i;
	for(i=0;i<n;++i)
	{
		Ms[i]=Ma[i]+Mb[i];
	}
}
