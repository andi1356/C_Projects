/*
	Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/
#include <stdio.h>
#include <stdlib.h>
#include "header.h"
int main()
{
	int i,j;
	int iF,jF;
	double hotel[30][30];
	double hotelF[30][30];
	printf("nr de etaje este: "); scanf("%d",&i);
	printf("nr de camere/etaj este: "); scanf("%d",&j);
	citesteValori(i,j,hotel);
	// afiseazaValori(hotel,i,j);
	// printf("Medie = %5.2lf\n",medieUltimaColoana(i,j,hotel));

	FILE *f;
	f=fopen("fileIN.txt","r");
	if(!f)
	{
		printf("eroare la citire");
		exit(EXIT_FAILURE);
	}
	citireFisier(hotelF,f,&iF,&jF);
	afisareFisier(hotel,i,j,hotelF,iF,jF);
	fclose(f);




	return 0;

}
