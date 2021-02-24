#include <stdio.h>
#include "header.h"

int main()
{
	char *text[L];
	int nl;
	nl=citireText(text,L);
	puts("textul este:");
	afisareText(text,nl);
	swap(&text[0],&text[1]);
	puts("interschimare");
	afisareText(text,nl);


	return 0;
}
