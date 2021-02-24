#include <stdio.h>
#include "header.h"


int main()
{
	int i,n=0;
	char a;
	char v[101];

	printf("textul este: \n");
	fgets(v,100,stdin);
	printf("caracterul care se cauta este:");
	scanf("%s",&a);
	for(i=0;v[i]!='\0';++i)
	{
		if(v[i]==a)
		{
			++n;
		}
	}

	printf("sirul contine litera \"%c\" de %d ori\n",a,n);

	return 0;
}


