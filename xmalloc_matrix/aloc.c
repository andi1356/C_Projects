#include "aloc.h"
#include <stdio.h>
#include <stdlib.h>
#include "aloc.h"

void *xmalloc(unsigned long noBytes)
{
    void *p=0;
    p=malloc(noBytes);
    if(!p) printf("eroare la alocare"),exit(1);
    return p;
}

int **aloc2d(int nrL,int nrC)
{
    int **a=0;
    int i;
    a=(int**)xmalloc(nrL*sizeof(int*));
    for(i=0;i<nrL;++i)
    {
        a[i]=(int*)xmalloc(nrC*sizeof(int));
    }
    return a;
}

void dealoc2d(int **a,int nrL)
{
    for(int i=0;i<nrL;++i)
    {
        free(a[i]);
        a[i]=0;
    }
    free(a);
    a=0;
}

