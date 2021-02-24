#include <stdio.h>
#include "header.h"

int alegere(int x)
{
	printf("minuscule la majuscule(1)\n SAU\nmajuscule la minuscule(2)\nRASPUNS = ");
	scanf("%d",&x);
	getchar();
return x;
}



void citire(SIR s)
{
	printf("Textul este: \n");
	fgets(s,100,stdin);
}

void MINtoMAJ(SIR s)
{
	int i;
	for(i=0;i<100;++i)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			s[i]=s[i]-'a'+'A';
		}
	}
	printf("AM SPUS: ");
	fputs(s,stdout);
}


void MAJtoMIN(SIR s)
{
	int i;
	for(i=0;i<100;++i)
	{
		if(s[i]>='A' && s[i]<='Z')
		{
			s[i]=s[i]-'A'+'a';
		}
	}
	printf("am soptit: ");
	fputs(s,stdout);
}
