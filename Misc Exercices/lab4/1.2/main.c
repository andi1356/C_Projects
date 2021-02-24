#include <stdio.h>
#include "header.h"
int main()
{
	int v[20];
	int n;
	printf("Numarul de elemente : ");
	scanf("%d",&n);
	citire(v,n);
	printf("Vectorul este: ");
	afisare(v,n);
	printf("\n minimul: %d",minim(v,n));
	printf("\n maximul: %d",maxim(v,n));
	printf("\n media aritmetica: %.2f",aritmetica(v,n));
	printf("\n media geometrica este: %.3f",geometrica(v,n));
	printf("\n");

return 0;
}

