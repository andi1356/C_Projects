#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int *citireVectorP(int n)
{
	int *a;
	int i;
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
	}
return a;
}

void afisareVectorP(int *a,int n)
{
	int i;
	for(i=0;i<n;++i)
	{
		printf("%d\n",a[i]);
	}
}
