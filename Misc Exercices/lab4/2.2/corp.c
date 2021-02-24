#include <stdio.h>
#include "header.h"

int citire(SIR a,int n)
{
	int i;
	for(i=0;i<n;++i)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	return n;
}

void afisare(SIR a,int n)
{
	int i;
	printf("(");
	for(i=0;i<n-1;++i)
	{
		printf("%d, ",a[i]);
	}
	printf("%d)\n",a[n-1]);
}

int gasit(SIR a,int n,int el)
{
	int i;
	for(i=0;i<n-1;++i)
	{
		if(a[i]==el)
		{
		return 1;
		}
		else
		{
		return 0;
		}
	}
if(a[n-1]==el)
{
	return 1;
}
else
{
	return 0;
}
}
int distinct(SIR a,SIR b,int n)
{
	int i,j=0;
	for(i=0;i<n;++i)
	{
		if(gasit(b,n,a[i])==0)
		{
		b[j]=a[i];
		++j;
		}
	}
return j;
}











