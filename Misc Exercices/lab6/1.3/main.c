#include <stdio.h>
#include "header.h"

int main()
{
	SIR s;
	int x=0;
	citire(s);
	if(alegere(x)==1)
	{
	MINtoMAJ(s);
	}
	else{
		MAJtoMIN(s);
		}
	return 0;
}
