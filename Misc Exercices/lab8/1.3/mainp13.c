#include "p13.h"
#include <stdlib.h>
int main()
{
	FILE *fin,*fout;
	int n;
	int v[SIZE];
	fout=fopen("p13.out","w");
	if(fout==0)
	{
		exit(1);
	}
	fin=fopen("p13.in","r");
	if(fin==0)
	{
		exit(1);
	}
	n=citireVector(v,fin);
//	afiseazaVector(v,n,stdout);

	fclose(fout);
	fclose(fin);
	return 0;
}
