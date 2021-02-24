#include <stdio.h>
#include "header.h"
int main()
{
	int v1[30],v2[30],s[30],n;
	printf("numarul de numere este: ");
	scanf("%d",&n);
	printf("primul vector: \n");
	citire(v1,n);
	afisare(v1,n);
	printf("al doilea vector: \n");
	citire(v2,n);
	afisare(v2,n);

	suma(v1,v2,s,n);
	printf("\nsuma este: \n");
	afisare(s,n);
return 0;
}
