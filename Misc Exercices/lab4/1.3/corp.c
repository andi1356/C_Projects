#include <stdio.h>
#include "header.h"

void citire(VECTOR v,int n)
{
	int i;
	for (i=0;i<n;++i)
	{
		printf("a[%d]=",i);
		scanf("%d",&v[i]);
	}
	printf("\n");
}

void afisare(VECTOR v,int n)
{
	int i;
	printf("(");
	for(i=0;i<n-1;++i)
	{
		printf("%d, ",v[i]);
	}
	printf("%d)\n",v[n-1]);
}

void ordonare(VECTOR v,int n)
{
	int i,aux,ok;
	ok=0;
	i=0;
	while(ok==0)
	{
		ok=1;
		for(i=0;i<n-1;++i)
		{
			if(v[i]>v[i+1])
			{
				aux=v[i];
				v[i]=v[i+1];
				v[i+1]=aux;
				ok=0;
			}
		}
	}
}




void ordonare2(VECTOR v,int n)
{
	int i,j,aux;
for(i=0;i<n-1;++i)
{
	for(j=i+1;j<n;++j)
	{
		if(v[i]<v[j])
			{
			aux=v[i];
			v[i]=v[i+1];
			v[i+1]=aux;
			}
	}
}
}







