#include <stdio.h>
#include "header.h"

void citire(MATRICE x,int l,int c,char nume)
{
	int i,j;
	printf("matricea se numeste: ");
	scanf("%c",nume);
	for(i=0;i<l;++i)
	{
		for(j=0;j<c;++j)
		{
			printf("%c[%d][%d]=",nume,i,j);
			scanf("%d",&x[i][j]);
		}
	}
}
