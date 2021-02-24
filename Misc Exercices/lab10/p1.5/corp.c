#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"


int citireText(char *text[],int Lmax){
int nl=0;	int lung;	char temp[82];//82 nicio semnificatie
 while(nl<Lmax &&fgets(temp,81,stdin))
{
lung=strlen(temp); // functia se afla in string.h
//if(temp[lung-1]=='\n')	
//{
   	temp[lung-1]='\0';
}
text[nl]=(char*)malloc(strlen(temp)+1*sizeof(char));
if(!text[nl]) { exit(1); }
strcpy(text[nl],temp);
++nl;
}
return nl;
}
void afisareText(char *text[],int nl){
int i; for(i=0;i<nl;++i) {	puts(text[i]); } }
void swapLT(char **p1, char **p2){
char *aux=0;
aux=*p1;
*p1=*p2;
*p2=aux;	}
void sortareText(char *text[],int nl){
int i; int ok; int k=nl-1; // pentru ca ultima linie e pentru CTRL-D, poate
do{
	ok=1;
	for(i=0;i<k;++i)
{
		if(strlen(text[i])>strlen(text[i+1]))
{  swapLT(&text[i],&text[i+1]); ok=0;  }
		}
   }while(ok==0 && k>0); }//ultima } e pentru inchiderea functiei

void eliberareMemorie(char *text[],int nl)
{
	int i; for(i=0;i<nl;++i)
		{ free(text[i]); text[i]=0; }
}


