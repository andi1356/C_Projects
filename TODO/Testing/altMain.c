#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv)
{
    int i;
    int lFlag,wFlag,cFlag;
    lFlag=wFlag=cFlag=0;
    if(argc>1)
    {
        for(i=1;i<argc;++i)
        if(argv[i][0]!='-')
        {
            printf("eroare");
            exit(1);
        }
        else
        {
            switch(argv[i][1])
            {
                case 'l': lFlag=1; break;
                case 'w': wFlag=1; break;
                case 'c': cFlag=1; break;
                default: {printf("eroare");exit(1);}
            }
        }
    }
    else { printf("introduceti argumente precum -l -w -c");exit(1); }
    int IN_WORD=0;
    int Ccount,Wcount,Lcount;
    Ccount=Wcount=Lcount=0;
    char c;
    while( (c=getchar()) && c!=EOF)
    {
        ++Ccount;
        switch (c)
        {
            case '\n': ++Lcount;
            case '\t':
            case ' ': if(IN_WORD==1){ Wcount++; IN_WORD=0; break;}
            case '\n': ++Lcount; break;
            default: IN_WORD=1;
        }
    }
    if(lFlag)
    printf("S-au citit %d linii;\n",Lcount);
    if(wFlag)
    printf("S-au citit %d cuvinte\n",Wcount);
    if(cFlag)
    printf("S-au citit %d caractere\n",Ccount);

        
    
    return 0;
}