#include <stdio.h>
#include "header.h"

int main()
{
	DATA x,y;
	int n,j;
	double m,a;
	printf("Numarul de masuratori facute este: ");
	scanf("%d",&n);
	citire(x,n);
	afisare(x,n);
	medie(x,n);
	m=medie(x,n);
	a=abatere(x,n);
	printf("\nMedia masuratorilor este: %.4lf\n",m);
	printf("\nAbaterea mediei este: %lf \n",a);
	subMedie(x,n);
	pesteMedie(x,y,n);
	afisare5(y);
	return 0;
}
