#include "alocare.h"
#include "matrice.h"
#include <stdio.h>

int main()
{
    unsigned int **a=0;
    int l=3;
    int c=3;
    a=citireM(l,c);
    afisareM(a,l,c);
    a=parcurgereM(a,l,c);
    afisareM(a,l,c);
    // unsigned int a=5;
    // unsigned int b=10;
    // swap(&a,&b);
    // printf("%d",a);



    return 0;
}
