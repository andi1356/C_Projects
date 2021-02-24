#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
	int *a=0;
	int n;
	printf("nr de el:");
	scanf("%d",&n);
	a=citireVectorP(n);
	afisareVectorP(a,n);
	free(a);
	a=0;
	return 0;
}
