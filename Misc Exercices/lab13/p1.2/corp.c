#include <stdio.h>
#include <stdlib.h>

#include "header.h"

void citire1(int l, int c, int **v)
{
	int i,j;
	for(i=0;i<l;++i)
	{
		for(j=0;j<c;++j)
		{
			scanf("%d",&v[i][j]);
		}
	}
}

int **citire2(int l,int c)
{
	int **v=0,i,j;
	v=(int**)malloc(l*sizeof(int*));
	for(i=0;i<l;++i)
	{
		v[i]=(int*)malloc(c*sizeof(int));
		for(j=0;j<c;++j)
		scanf("%d",&v[i][j]);
	}
	return v;
}
 
int **suma(int l,int c,int **v1,int **v2)
{
	int **s=0;
	s=(int**)malloc(l*sizeof(int*));
	int i,j;
	for(i=0;i<l;++i)
	{
		s[i]=(int*)malloc(c*sizeof(int));
	}
	for(i=0;i<l;++i)
	{
		for(j=0;j<c;++j)
		{
			s[i][j]=v1[i][j]+v2[i][j];
		}
	}
	return s;
	}

void afisare(int l, int c, int **v)
{
	int i,j;
	for(i=0;i<l;++i)
	{
		for(j=0;j<c;++j)
		{
			printf(" %d ",v[i][j]);
		}
		printf("\n");
	}
}

void freeV(int l,int **v)
{
	int i;
	for(i=0;i<l;++i)
	{
		free(v[i]);
		v[i]=0;
	}
	free(v);
	v=0;
}
