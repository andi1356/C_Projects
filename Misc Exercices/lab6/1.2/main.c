#include <stdio.h>
#include "header.h"

int main()
{
	char x;
	do{
	SIR s;
	text(s);
	vocala(s,'a');
	vocala(s,'e');
	vocala(s,'i');
	vocala(s,'o');
	vocala(s,'u');
	printf("doriti reluarea acestui program? d/n\n");
	x=getchar();
	getchar();
	}while(x=='d');
return 0;
}
