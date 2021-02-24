#include "alocare.h"
#include <stdio.h>
#include <stdlib.h>

void *xmalloc(unsigned int n)
{
    void *p=0;
    p=malloc(n);
    if(!p)
    {
        printf("Eroare la alocare de memorie"); 
        exit(1);
    }
    return p;
}

unsigned int **aloc2d(unsigned int l,int c)
{
    unsigned int **a;
    a=(unsigned int**)xmalloc(sizeof(unsigned int*)*l);
    for(int i=0; i<l; ++i)
    {
        a[i]=(unsigned int*)xmalloc(sizeof(unsigned int)*c);
    }
    return a;
}

void dealoc2d(unsigned int** a, int l)
{
    int i;
    for(i=0; i<l; ++i)
        free(a[i]); a[i]=0;
    free(a);
    a=0;
}
