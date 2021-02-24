#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int citireText(char *text[],int Lmax)
{
	int nl=0;
	int lung;
	char tastatura[101];
	while(nl<Lmax && fgets(tastatura,100,stdin))
	{
		lung=strlen(tastatura);
		if(tastatura[lung-1]=='\n')
		{
			tastatura[lung-1]='\0';
		}
		text[nl]=(char*)malloc((strlen(tastatura)+1)*sizeof(char));
		if(!text[nl]) { printf("eroare la alocare de memorie"); exit(1); }
		strcpy(text[nl],tastatura);
		nl++;
	}
	return nl;
}

void afisareText(char *text[],int nl)
{
	int i;
	for(i=0;i<nl;++i)
	{
		puts(text[i]);
	}
}

void swap(char **L1,char **L2)
{
	char *aux;
	aux=*L1;
	*L1=*L2;
	*L2=aux;
}

void ordonareText(char *text[],int nl)
{
	int max;























