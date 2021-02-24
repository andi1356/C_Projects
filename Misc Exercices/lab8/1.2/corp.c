#include <stdio.h>
#include "header.h"
#include <math.h>

void citire(int z[],int n)
{
	int i,ziua;
	printf("nr de elemente: ");
	scanf("%d",&n);
	ziua=31-n+1;
	for(i=0;i<n;++i)
	{
		printf("ziua %d [%d] = ",ziua,i);
		scanf("%d",&z[i]);
		ziua++;
	}
}
int maxim(int z[],int n)
{
	int i,max;
	max=-9999999;
	for(i=0;i<n;++i)
	{
		if(z[i]>max)
		{
			printf("%d",i);

			max=z[i];
		}
		printf("whut %d",i);
	}

	return max;
}


int minin(int z[],int n)
{
	int i,min=-999999;
	for(i=0;i<n;++i)
	{
		if(z[i]<min)
		{
			z[i]=min;
		}
	}
	return min;
}













