#ifndef ALOCARE_H_
#define ALOCARE_H_

void *xmalloc(unsigned int n);
unsigned int **aloc2d(unsigned int l,int c);
void dealoc2d(unsigned int **a,int l);

#endif