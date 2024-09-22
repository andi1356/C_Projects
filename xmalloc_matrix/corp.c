#include <stdio.h>
#include <stdlib.h>
#include "aloc.h"
#include "header.h"



int **citireM(int nrL,int nrC)
{
    int **M=0;
    int i;
    M=(int**)xmalloc(nrL*sizeof(int*));
    for(i=0;i<nrL;++i)
    {
        M[i]=(int*)malloc(nrC*sizeof(int));
    }
    int j;
    for(i=0;i<nrL;++i)
    {
        for(j=0;j<nrC;++j)
        {
            printf("T[%d][%d]=",i,j);
            scanf("%d",&M[i][j]);
        }
    }
    return M;
}

void afisareM(int **M,int nrL,int nrC)
{
    int i,j;
    for(i=0;i<nrL;++i)
    {
        for(j=0;j<nrC;++j)
        {
            printf("T[%d][%d]=%d ",i,j,M[i][j]);
        }
        puts("\n");
    }
    puts("\n\n");
}

int **adunareM(int **M1,int **M2,int nrL,int nrC)
{
    int **M=0;
    int i;
    M=(int**)xmalloc(nrL*sizeof(int*));
    for(i=0;i<nrL;++i)
    {
        M[i]=(int*)malloc(nrC*sizeof(int));
    }
    int j;
    for(i=0;i<nrL;++i)
    {
        for(j=0;j<nrC;++j)
        {
            M[i][j]=M1[i][j]+M2[i][j];
        }
    }
    puts("\n\n");
    return M;
}