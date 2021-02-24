#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int *citireVectorP(int n)
{
	int i;
	int *a=0;
	a=(int*)malloc(n*sizeof(int));
	if(a==0)
	{
		printf("eroare la alocare");
		exit(EXIT_FAILURE);
	}

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
		printf("a[%d]=%d\n",i,a[i]);
	}
}

