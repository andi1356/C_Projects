#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
	unsigned int **a=0;
	
	FIRMA *firma=0;
	
	
	FILE *f;
	f=fopen("date.txt","r");
	if(!f)
	{
		printf("eroare la citire din fisier");
		exit(1);
	}

	firma=citireInfo(f);
	a=citireM(firma,f);
	afisare(firma,a);
	fclose(f);

	dealoc2d(a,firma->l);
	free(firma->den);
	firma->den=0;
	free(firma->v);
	firma->v=0;
	free(firma);
	firma=0;
	return 0;
}
