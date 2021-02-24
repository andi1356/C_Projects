#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
	int **v1=0,**v2=0,**s=0;
	int l,c,i;
	scanf("%d%d",&l,&c);
	v1=(int**)malloc(l*sizeof(int*));
	for(i=0;i<l;++i)
	v1[i]=(int*)malloc(c*sizeof(int));
	puts("prima matrice:");
	citire1(l,c,v1);
	puts("a doua matrice:");
	v2=citire2(l,c);
	puts("matricea suma este:");
	s=suma(l,c,v1,v2);
	afisare(l,c,s);
	freeV(l,v1);
	freeV(l,v2);
	freeV(l,s);
	return 0;
}

