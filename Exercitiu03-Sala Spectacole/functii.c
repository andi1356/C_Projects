/*
	Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void *xmalloc(unsigned int nrOcteti)
{
	int *a;
	a=malloc(nrOcteti);
	if(!a)
	{
		printf("eroare la alocare de memorie");
		exit(1);
	}
	return a;
}

int **aloc2d(int l,int c)
{
	int **a;
	int i;
	a=(int**)xmalloc(l*sizeof(int*));
	for(i=0;i<l;++i)
	{
		a[i]=(int*)xmalloc(c*sizeof(int));
	}
	return a;
}

void dealoc2d(int **a,int l)
{
	int i;
	for(i=0;i<l;++i)
	{
		free(a[i]);
		a[i]=0;
	}
	free(a);
	a=0;
}

int **citireM(int l,int c)
{
	int **a=0;
	int i,j;
	a=aloc2d(l,c);
	printf("Introduceti 1 sau 0 in functie de ocuparea locurile pe rand:\nExemplu pentru 4 locuri pe rand se poate introduce: 1 1 0 1\n");
	for(i=0;i<l;++i)
	{
		printf("rand %d: ",i);
		for(j=0;j<c;++j)
		{
			scanf("%d",&a[i][j]);
		}
	}
	return a;
}

double *citireV(int l)
{
	double *v=0;
	int i;
	v=(double*)xmalloc(l*sizeof(double));
	for(i=0;i<l;++i)
	{
		printf("pretul pe randul %d: ",i);
		scanf("%lf",&v[i]);
	}
	return v;
}

char *den()
{
	char *den=0;
	char buff[101];

	printf("\ndenumirea spectacolului este:");
	fgets(buff,100,stdin);

	buff[strlen(buff)-1]='\0';
	den=(char*)xmalloc(strlen(buff)+1*sizeof(char));
	strcpy(den,buff);
	return den;
}

double procentDeOcupare(int **M,int l,int c)
{
	double nrOcupanti=0;
	int i,j;
	for(i=0;i<l;++i)
	{
		for(j=0;j<c;++j)
		{
			if(M[i][j]==1)
				nrOcupanti++;
		}
	}
	return (nrOcupanti*100/(l*c));
}

void afisare(char *den,int **a,double *v,double procent,int l,int c)
{
	FILE *f;
	f=fopen("date.txt","w");
	if(!f)
	{
		printf("eroare la afisare in fisier");
		exit(1);
	}
	fprintf(f,"\nLa spectacolul \"%s\" ocuparea salii si preturile au fost: \n",den);
	int i,j;
	for(i=0;i<l;++i)
	{
		fprintf(f,"\t");
		for(j=0;j<c;++j)
		{
			fprintf(f,"%d ",a[i][j]);
		}
		fprintf(f,"- pret/loc: %.2lf lei\n",v[i]);
	}
	fprintf(f,"\nProcentul de ocupare al salii a fost: %.2f%%",procent);

	fclose(f);
}
