#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
	int n;
	int *a=0;
	printf("nr de el:");
	scanf("%d",&n);
	a=citireVectorP(n);
	afisareVectorP(a,n);
	return 0;
}

