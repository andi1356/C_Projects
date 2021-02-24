#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int *citireVectorP(int n)
{
	int *a=0;
	a=(int*)malloc(n*sizeof(int));
	if(!a)	{printf("eroare la alocare1"); exit(1);}
	int i=0;
	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
	}
	return a;
}

void afisareVectorP(int *a,int n)
{
	int i=0;
	printf("A=(");
	for(i=0;i<n-1;++i)
	{
		printf("%d, ",a[i]);
	}
	printf("%d)\n",a[i]);
}

int sumaCifre(int x)
{
	int u,s=0;
	while(x!=0)
	{
		u=x%10;
		s+=u;
		x=x/10;
	}
	return s;
}

int *determinareW(int *a,int n)
{
	int *w=0;
	w=(int*)malloc(n*sizeof(int));
	if(!w)
	{
		printf("eroare la alocare W"); exit(1);
	}
	int i;
	for(i=0;i<n;++i)
	{
		w[i]=sumaCifre(a[i]);
	}
	return w;
}

int maxim(int *a,int n)
{
	int i,indice;
	int max;
	indice=0;
	max=*a;
	for(i=0;i<n;++i)
	{
		if(a[i]>max)
		{
			max=a[i];
			indice=i;
		}
	}
return indice;
}




























