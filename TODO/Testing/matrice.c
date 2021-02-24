#include "alocare.h"
#include "matrice.h"
#include <stdio.h>


unsigned int **citireM(int l,int c)
{
    unsigned int **a=0;
    a=aloc2d(l,c);
    int i,j;
    for(i=0;i<l;++i)
    {
        for(j=0;j<c;++j)
        {
            scanf("%d",&a[i][j]);
        }
    }
    return a;
}


unsigned int **parcurgereM(unsigned int **a,int l,int c)
{
    int i,j;
    //unsigned int max=a[0][0];
    for(i=0;i<l;++i)
    {
        for(j=0;j<c-1;++j)
        {
            if(a[i][j]<a[i][j+1])
            {
                swap( &(a[i][j]) , &(a[i][j+1]) );
                j=0;
            }
        }
    }
    return a;
}
void voidParcurgereM(unsigned int **a,int l,int c)
{
    int i,j;
    //unsigned int max=a[0][0];
    for(i=0;i<l;++i)
    {
        for(j=0;j<c;++j)
        {
            if(a[i][j]>a[i][j+1])
            {
                unsigned int x=a[i][j];
                unsigned int y=a[i][j+1];
                unsigned int z=0;
                z=x;
                x=y;
                y=z;
                j=0;
            }
        }
    }
}
void afisareM(unsigned int **a,int l,int c)
{
    int i,j;
        for(i=0;i<l;++i)
    {
        for(j=0;j<c;++j)
        {
            printf("%d\t",a[i][j]);
        }
        puts("\n");
    }
}
unsigned int max(unsigned int a,unsigned int b)
{
    return (a>b) ? a : b;
}

void swap(unsigned int *a,unsigned int *b)
{
    unsigned int c=0;;
    c=*a;
    *a=*b;
    *b=c;
}


