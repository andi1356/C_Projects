#include <stdio.h>
#include <stdlib.h>
#include "header.h"




int **citireMatrice(int n,int m)
{
	int i,j,**a=0;
	
	a=(int**)malloc(n*sizeof(int*));
	for(i=0;i<n;++i)
	{
		a[i]=(int*)malloc(m*sizeof(int));
	}

	for(i=0;i<n;++i)
	{
		for(j=0;j<m;++j)
		{
			printf("et[%d] cam[%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	return a;

}

void dealoc2d(int **a,int n)
{
	int i;
	for(i=0;i<n;++i)
	{
		free(a[i]);
		a[i]=0;
	
	}
	free(a);
}

double **rezMatrice(int **a,int n,int m,double c)
{
	int i,j;
	double **b=0;
	b=(double**)malloc(n*sizeof(double**));
	for(i=0;i<n;++i)
	{
		b[i]=(double*)malloc(m*sizeof(double));
	}

	for(i=0;i<n;++i)
	{
		for(j=0;j<m;++j)
		{
			if(a[i][j]!=0)
			{
				b[i][j]=c/a[i][j];
			}
			
		}
	}
	return b;

}
void afisare(int lflag,int tflag,int pflag,int **a,double **b,int n,int m,double c,FILE *f)
{

	int i,j;
	fprintf(f,"Chiria pt. fiecare camera este %.1lf lei .",c);
	fprintf(f," Matricea cu suma datoare pt fiecare studenti este: \n");
	for(i=0;i<n;++i)
	{
		for(j=0;j<m;++j)
		{
			fprintf(f,"%2.2lf ",b[i][j]);
		
		}
		fprintf(f,"\n");
	}

	if(lflag==1)
	{
		int nr;
		nr=rezL(a,n,m);
		fprintf(f,"\nCaminul are %d camere libere.",nr);
	}
	if(tflag==1)
	{
		double sum;
		sum=rezT(a,n,m,c);
		fprintf(f,"\nSuma toatala este de %.0lf lei .",sum);
	}
	if(pflag==1)
	{
		int *p=0,stud,etj;
		p=rezP(a,n,m);
		stud=p[0];
		etj=*(p+1);
		fprintf(f,"\nCamera cu cei mai multi stundeti este camera cu %d de la etjaul %d .",stud,etj);
		free(p);
		p=0;
	}
}
int rezL(int **a,int n,int m)
{
	int i,j,rez=0;
	for(i=0;i<n;++i)
	{
		for(j=0;j<m;++j)
		{
			if(a[i][j]==0)
				++rez;
		}
	}
	return rez;
}
double rezT(int **a,int n,int m,double c)
{
	int i,j;
	double sum=0;
	for(i=0;i<n;++i)
	{
		for(j=0;j<m;++j)
		{
			if(a[i][j]!=0)
				sum+=c;
		}
	}
	return sum;
}	
int *rezP(int **a,int n,int m)
{
	int *p,i,j,etj=0,nr=0,aux=0;;
	p=(int*)malloc(2*sizeof(int));

	for(i=0;i<n;++i)
	{
		aux=0;
		for(j=0;j<m;++j)
		{
			aux=a[i][j];
			if(aux>nr)
			{
				nr=aux;
				etj=j;
			}
		
		}
	}
	p[0]=nr;
	p[1]=etj;

	return p;
}

