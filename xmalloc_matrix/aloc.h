#ifndef ALOC_H
#define ALOC_H


void *xmalloc(unsigned long noBytes);
int **aloc2d(int nrL,int nrC);
void dealoc2d(int **T,int nrL);




#endif