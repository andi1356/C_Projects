#include <stdio.h>
#include <string.h>
#include "header.h"
int main()
{
    int **M1=0;
    int **M2=0;
    int **M=0;
    M1=citireM(3,3);
    M2=citireM(3,3);
    M=adunareM(M1,M2,3,3);
    afisareM(M,3,3);

    return 0;
}