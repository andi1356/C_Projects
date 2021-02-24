#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
	int v[20],n,s;
	printf("numarul de elemnte: ");
	scanf("%d",&n);
	citire(v,n);
	s=suma(v,n);
	FILE *W;
	W=fopen("file.out","w");
	if(W==0)
	{
		printf("error writing");
		exit(EXIT_FAILURE);
	}

	fprintf(W,"Suma=%d",s);
	fclose(W);
	return 0;
}
