/*
	Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
	int **a=0,l,c;
	double *v=0;
	double procent;
	char *denumire;
	denumire=den();

	printf("Introduceti numarul de randuri: ");
	scanf("%d",&l);
	printf("Introduceti numarul de locuri/rand: ");
	scanf("%d",&c);
	a=citireM(l,c);
	v=citireV(l);
	procent = procentDeOcupare(a,l,c);
	afisare(denumire,a,v,procent,l,c);

	dealoc2d(a,l);
	free(v);
	v=0;
	return 0;




}
