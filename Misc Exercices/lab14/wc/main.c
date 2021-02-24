#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int words=1,lines=1,characters=1;
	int i,j,li;
	int ch;
	for(i=1;i<argc;++i)
	{
		li=strlen(argv[i]);
		for(j=1;j<li;++j)
		{
			switch(*argv[j])
			{
				case 'l': lines=0; break;
				case 'w': words=0; break;
				case 'c': characters=0; break;
				default: printf("eroare");
			}
		}
	}
	while( (ch=getchar()) != EOF )
	{
		if(lines==0)
		{
			if(ch=='\n')
				lines+=1;
		}
		if(words==0)
		{
			if(ch=='\t'&&ch+1!='\t')
				words+=1;
		}
		if(characters==0)
		{
			characters+=1;
		}
	}
	if(lines!=1)
	{
		printf(" %d lines\n",lines);
	}
	if(words!=1)
	{
		printf("%d words \n",words);
	}
	if(characters!=1)
	{
		printf(" %d characters",characters);
	}
	return 0;
}









