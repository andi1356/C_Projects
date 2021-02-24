#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header.h"

COMPLEX *citireSir(COMPLEX *x,int n)
{
	x=(COMPLEX*)malloc(n*sizeof(COMPLEX));
	if(!x)
	{
		printf("eroare la alocarea dinamica a sirului");
		exit(1);
	}
	int i;
	for(i=0;i<n;++i)
	{
		printf("Numarul complex %d:\n",i);
		printf("Real:"); scanf("%lf",&((x+i)->real));
		printf("Imag:"); scanf("%lf",&((x+i)->imag));
	}
	return x;
}

void afisareSir(COMPLEX *x,int n)
{
	int i;
	for(i=0;i<n;++i)
	{
		printf("Real:%lf	Imaginar:%lf",x[i].real,x[i].imag);
		puts("\n");

	}
}

void sumaIndice(COMPLEX *x, int n)
{
	COMPLEX s_par={0 , 0},s_impar={0,0},raport={0,0};
	int i;
	for(i=0;i<n;i+=2)
	{
		s_par=adunare(&s_par,&x[i]);
	}
	puts("Suma indicilor PAR:");
	afisare(&s_par);
	for(i=1;i<n;i+=2)
	{
		s_impar=adunare(&s_impar,&x[1]);
	}
	puts("Suma indicilor IMPAR:");
	afisare(&s_impar);
	raport.real = s_par.real / s_impar.real;
	raport.imag = s_par.imag / s_impar.imag;
	puts("Raportul sumelor:");
	afisare(&raport);

}


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

COMPLEX adunare(COMPLEX *x,COMPLEX *y)
{
	COMPLEX z;
	z.real=x->real+y->real;
	z.imag=x->imag+y->imag;
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

