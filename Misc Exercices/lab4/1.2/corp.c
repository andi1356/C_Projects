#include <stdio.h>
#include <math.h>
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

void afisare(int v[],int n)
{
	int i;
		printf("(");
		for(i=0;i<n-1;++i)
		{
		printf("%d, ",v[i]);
		}
		printf("%d)\n",v[n-1]);
	}

int minim(int v[],int n)
{
	int i,min;
	i=0;
	min=v[i];
	for(;i<n;++i)
	{
		if(v[i]<min)
		{
			min=v[i];
		}
	}
return min;
}

int maxim(int v[],int n)
{
	int i,max;
	i=0;
	max=v[i];
	for(;i<n;++i)
	{
		if(v[i]>max)
		{
			max=v[i];
		}
	}
return max;
}

float aritmetica(int v[],int n)
{
	int i;
	float r;
	r=0;
	for(i=0;i<n;++i)
	{
		r=r+v[i];
	}
	r=r/n;
return r;
}

float geometrica(int v[],int n)
{
	int i;
	float r;
	r=1;
	for(i=0;i<n;++i)
	{
		r=r*v[i];
	}
	r=pow(r,(1./n));
return r;
}
















