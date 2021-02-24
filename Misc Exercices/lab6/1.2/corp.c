#include <stdio.h>
#include "header.h"

void text(SIR s)
{
	fgets(s,100,stdin);
}

void vocala(SIR s,char vocala)
{
	int i,a=0;
	int Vocala=vocala-'a'+'A';
	for(i=0;i<100;++i)
	{
		if(s[i]==vocala || s[i]==Vocala)
		a++;
	}
printf("Vocala \"%c\" apare de %d ori.\n",vocala,a);
}
