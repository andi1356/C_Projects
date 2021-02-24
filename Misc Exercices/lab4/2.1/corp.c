#include <stdio.h>
#include <math.h>
#include "header.h"

void citire(DATA x,int n)
{
	int i;
	for(i=0;i<n;++i)
	{
		printf("x[%d]=",i);
		scanf("%lf",&x[i]);
	}
}

void afisare(DATA x,int n)
{
	int i;
	printf("Masuratorile sunt urmatoarele: (");
	for(i=0;i<n-1;++i)
	{
		printf("%.4lf, ",x[i]);
	}
	printf("%lf)\n",x[n-1]);
}

double medie(DATA x,int n)
{
	int i;
	double media;
	media=0;
	for(i=0;i<n;++i)
	{
		media=media+x[i];
	}
	media=media/n;
return media;
}

double abatere(DATA x,int n)
{
	int i;
	double abaterea;
	abaterea=0;
	for(i=0;i<n;++i)
	{
	abaterea=abaterea+pow((x[i]-medie(x,n)),2);
	}
	abaterea=(sqrt(abaterea))/(n*(n-1));
return abaterea;
}


int subMedie(DATA x,int n)
{
	int i,s=0;
	printf("Sub medie sunt: ");
	for(i=0;i<n;++i)
	{
		if(x[i]<medie(x,n))
		{
			s=s+1;
		}
	}
	printf("%d numere.\n",s);
return 0;
}

int pesteMedie(DATA x,DATA y,int n)
{
	int i,j=0;
		for(i=0;i<n;++i)
		{
			if(x[i]>medie(x,n))
			{
				y[j]=x[i];
				++j;
			}
		}
return j;
}

	
void afisare5(DATA y)
{
	int i,spacer=1,j,n;
	DATA x;
	j=pesteMedie(x,y,n);
	printf("numerele peste medie sunt: \n");
	for(i=0;i<j;++i)
	{
		if(spacer<5)
		{
			spacer++;
			printf("(%6.3lf\t",y[i]);
		}
		else
			{
			printf("%6.3lf)\n",y[i]);
			spacer=1;
			}
		}
	}
















