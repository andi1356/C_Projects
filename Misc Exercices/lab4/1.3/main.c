#include <stdio.h>
#include "header.h"

int main()
{
	int n;
	VECTOR v;

	printf("numarul de elemente este: ");
	scanf("%d",&n);
	citire(v,n);

	printf("vectorul este: ");
	afisare(v,n);

	printf("vectorul ordonat este: ");
	ordonare(v,n);
	afisare(v,n);

	printf("\n\nordonare2: \n\n");

	printf("numarul de elemente este: ");

	scanf("%d",&n);

	citire(v,n);

	printf("vectorul este: ");
	afisare(v,n);
	printf("vectorul ordonat este: ");
	afisare(v,n);
}

	
