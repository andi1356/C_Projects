#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
	int *a=0;
	int n;
	printf("nr de el:"); scanf("%d",&n);
	a=citireVectorP(n);
	int *w=0;
	w=determinareW(a,n);
	afisareVectorP(w,n);
	printf("indicele elementului maxim este: %d\n",maxim(a,n));
	free(a);
	a=0;
	free(w);
	w=0;

return 0;
}
