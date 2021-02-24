#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void *xmalloc(unsigned int nrOcteti)
{
	void *a=0;
	a=malloc(nrOcteti);
	if(!a)
	{
		printf("eroare la alocare de memorie");
		exit(1);
	}
	return a;
}

unsigned int **aloc2d(unsigned int l,unsigned int c)
{
	unsigned int **a;
	int i;
	a=(unsigned int**)xmalloc(l*sizeof(unsigned int*));
	for(i=0;i<l;i++)
	{
		a[i]=(unsigned int*)xmalloc(c*sizeof(unsigned int));
	}
	return a;
}

void dealoc2d(unsigned int **a,unsigned int l)
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

FIRMA *citireInfo(FILE *f)
{
	FIRMA *fir=0;
	char buff[101];
	fir=(FIRMA*)xmalloc(sizeof(FIRMA));

	fgets(buff,100,f);
	buff[strlen(buff)-1]='\0';
	fir->den=(char*)xmalloc((strlen(buff))*sizeof(char));
	strcpy(fir->den,buff);
	fscanf(f,"%u",&fir->l);
	fscanf(f,"%u",&fir->c);

	fir->v=citireV(fir->c,f);

	return fir;
}

double *citireV(unsigned int l,FILE *f)
{
	double *v=0;
	int i;

	v=(double*)xmalloc(l*sizeof(double));
	for(i=0;i<l;++i)
	{
		fscanf(f,"%lf",&v[i]);
	}
	return v;
}

unsigned int **citireM(FIRMA *fir,FILE *f)
{
	unsigned int **a=0;
	int i,j;
	a=aloc2d(fir->l,fir->c);
	for(i=0;i<fir->l;++i)
	{
		for(j=0;j<fir->c;++j)
		{
			fscanf(f,"%u",&a[i][j]);
		}
	}
	return a;
}


void afisare(FIRMA *fir,unsigned int **a)
{
	printf("numele firmei este:%s. \tnr de l: %u\t nr de c: %u\n",fir->den,fir->l,fir->c);
	int i;
	for(i=0;i<fir->c;++i)
	{
		printf("%lf",fir->v[i]);
	}
	printf("stocul este:");
	int j;
	for(i=0;i<fir->l;++i)
	{
		printf("\t");
		for(j=0;fir->c;++j)
		{
			printf(" %u ",a[i][j]);
		}
		printf("\n");
	}
}























































