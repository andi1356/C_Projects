#include <stdio.h>
#include "header.h"

int main()
{
	MATRICE x;
	int l,c;
	char nume;
	printf("Numarul de linii: ");
	scanf("%d",&l);
	printf("numarul de coloane: ");
	scanf("%d",&c);
	citire(x,l,c,nume);
}
