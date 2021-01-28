#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void citesteValori(int nv,int nc,double hotel[][30])
{
	printf("introduceti pretul/camera: \n");
	for(int i=0;i<nv;++i)
	{
		for(int j=0;j<nc;++j)
		{
			printf("e[%d]c[%d]=",i,j); scanf("%lf",&hotel[i][j]);
		}
	}
	printf("Valorile se afla in fisierul txt");
}
void afiseazaValori(double hotel[][30],int nv,int nc)
{
	for(int i=0;i<nv;++i)
	{
		for(int j=0;j<nc;++j)
		{
			printf("etajul %02d camera %02d a incasat: %5.2lf.\n",i,j,hotel[i][j]);
		}
	}
}

double medieUltimaColoana(int nv,int nc,double hotel[][30])
{
	double medie=0;
	int j,i=nv-1;
	for(j=0;j<nc;++j)
	{
		medie+=hotel[i][j];
	}
	medie=medie/(float)nc;
	return medie;
}

void citireFisier(double hotel[30][30],FILE *f,int *nv,int *nc)
{
	int i,j;
	fscanf(f,"%d",nv); fscanf(f,"%d",nc);

	for(i=0;i<*nv;++i)
	{
		for(j=0;j<*nc;++j)
		{
			fscanf(f,"%lf",&hotel[i][j]);
		}
	}
}

void afisareFisier(double hotel[][30],int ii,int jj,double hotelF[30][30],int iiF,int jjF) {
	FILE *f;
	int i,j;
	f=fopen("fileOUT.txt","w");
	if(!f)
	{
		printf("eroare la afisare");
		exit(EXIT_FAILURE);
	}
	fprintf(f,"Hotelul citit de la tastatura are %d etaje si %d camere / etaj:\n",ii,jj);
	for(i=0;i<ii;++i){
		for(j=0;j<jj;++j){
			fprintf(f,"\t%f\t",hotel[i][j]);
		}
		fprintf(f,"\n");
	}
	fprintf(f,"Media ultimei coloane este: %f\n",medieUltimaColoana(ii,jj,hotel));
	fprintf(f,"\nHotelul citit din fisier are %d etaje si %d camere / etaj:\n",iiF,jjF);
	for(i=0;i<iiF;++i){
		for(j=0;j<jjF;++j){
			fprintf(f,"\t%f\t",hotelF[i][j]);
		}
		fprintf(f,"\n");
	}
	fprintf(f,"Media ultimei coloane este: %f",medieUltimaColoana(iiF,jjF,hotelF));
	fclose(f);
}





