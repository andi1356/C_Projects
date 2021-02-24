#ifndef header_h_
#define header_h_

void *xmalloc(unsigned int nrOcteti);
int **aloc2d(int l,int c);
void dealoc2d(int **a,int l);
int **citireM(int l,int c);
double *citireV(int l);
void afisare(char *den,int **a,double *v,double procent,int l,int c);
char *den();
double procentDeOcupare(int **M,int l,int c);


#endif
