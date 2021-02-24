#include <stdio.h>
#include "header.h"

int main()
{
	char *text[L]; // L e definit in header =50
	int numarLinii=0;
	numarLinii=citireText(text,L);
	if(numarLinii>0)
	{
		puts("Textul introdus este");
		afisareText(text,numarLinii);
		puts("Textul sortat este:");
		sortareText(text,numarLinii);
		afisareText(text,numarLinii);
		eliberareMemorie(text,numarLinii);
	}
	else
	{
		printf("nu s-a introdus text");
	}
return 0;
}

