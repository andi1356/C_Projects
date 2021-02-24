#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int **citireV(int **v)
{
	puts("introduceti o matrice de 2/2");
	int i,j;
	v=(int**)malloc(SIZE*sizeof(int));
	for(i=0;i<SIZE;++i)
	{
		v[i]=(int*)malloc(SIZE*sizeof(int));
	}
	for(i=0;i<SIZE;++i)
	{
		for(j=0;j<SIZE;++j)
		{
			scanf("%d",&v[i][j]);
		}
	}
	return v;
}


void afisareV(int **v)
{
	int i,j;
	
	FILE *f;
	f=fopen("file.out","w");
	if(!f)
	{
		printf("eroare la citire din fisier");
		exit(1);
	}
	for(i=0;i<SIZE;++i)
	{
		fprintf(f,"\n");
		for(j=0;j<SIZE;++j)
		{
			fprintf(f,"%d ",v[i][j]);
		}
	}
}

