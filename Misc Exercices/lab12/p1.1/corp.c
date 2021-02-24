#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header.h"

void citire(COMPLEX *x)
{
	printf("Partea reala:");
	scanf("%lf",&x->real);
	printf("Partea imaginara:");
	scanf("%lf",&x->imag);
}


void afisare(COMPLEX *x)
{
	printf("Parte reala: %lf	Parte imaginara: %lf\n",x->real,x->imag);
}

COMPLEX *adunare(COMPLEX *x,COMPLEX *y)
{
	COMPLEX *z=0;
	z=(COMPLEX*)malloc(sizeof(COMPLEX));
	z->real=x->real+y->real;
	z->imag=x->imag+y->imag;
	return z;
}

COMPLEX *inmultire(COMPLEX *x,COMPLEX *y)
{
	COMPLEX *z;
	z=(COMPLEX*)malloc(sizeof(COMPLEX));
	z->real=x->real*y->real-(x->imag*y->imag);
	z->imag=(x->real*y->imag)+(y->real*x->imag);
	return z;
}

COMPLEX *conjugat(COMPLEX *x)
{
	COMPLEX *z=0;
	z=(COMPLEX*)malloc(sizeof(COMPLEX));
	z->imag=-x->imag;
	return z;
}

double modul(COMPLEX *x)
{
	double z;
	z=sqrt(pow(x->real,2)+pow(x->imag,2));
	return z;
}
