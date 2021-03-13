/*
	Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"


int main(int argc,char *argv[])
{
	int lflag,tflag,pflag,i,j,ok=0,n,m;
	FILE *f;
	int li,**a=0;
	double c,**b=0;
	char buf[100],*den=0;




	if(argc>1)
	{
		lflag=0;
		tflag=0;
		pflag=0;

		for(i=1;i<argc;++i)
		{
			if(argv[i][0]!='-')
			{
				f=fopen(argv[i],"w");
				if(f==0)
				{
					printf("Eroare la fisier");
					exit(EXIT_FAILURE);
				}
				ok=1;
			}
		}

	}
	if(ok==1)
	{
		for(i=0;i<argc;++i)
		{
			li=strlen(argv[i]);
			for(j=0;j<li;++j)
			{
				switch(argv[i][j])
				{
					case 'l':lflag=1;
						 break;
					case 't':tflag=1;
						 break;
					case 'p':pflag=1;
						 break;
				}


			}
		}
		printf("Numele caminului:");
		fgets(buf,99,stdin);
		buf[strlen(buf)-1]='\0';
		den=(char*)malloc((strlen(buf)+1)*sizeof(char));
		strcpy(den,buf);


		printf("Etaje: ");
		scanf("%d",&n);
		printf("Camere/Etaj: ");
		scanf("%d",&m);
		printf("Urmeaza sa introduceti numarul de studenti din fiecare camera:\n");
		a=citireMatrice(n,m);

		printf("Pretul camerei este= ");
		scanf("%lf",&c);

		b=rezMatrice(a,n,m,c);

		afisare(lflag,tflag,pflag,a,b,n,m,c,f);


		free(den);
		den=0;
		dealoc2d(a,n);
		a=0;
		fclose(f);
	}
	else
	{
		printf("Fisier inexistent in linia de comanda\nIntroduceti un fisier in linia de comanda pentru date de output\n");
		printf("De asemenea in linia de comanda se pot alege urmatoarele: -l -t -p\n\t-l pentru a afisa cate camere sunt libere\n\t-t pentru suma totala incasata lunar\n\t-p pentru a afisa camera cu cei mai multi studenti\n\n");
		exit(EXIT_FAILURE);

	}


	return 0;
}
