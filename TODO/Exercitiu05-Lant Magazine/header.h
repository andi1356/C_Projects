#ifndef header_h_
#define header_h_

typedef struct _FIRMA{
	char *den;
	unsigned int l,c;
	double *v;
} FIRMA;

FIRMA *citireInfo(FILE *f);
void *xmalloc(unsigned int nrOcteti);
unsigned int **aloc2d(unsigned int l,unsigned int c);
void dealoc2d(unsigned int **a,unsigned int l);
unsigned int **citireM(FIRMA *fir,FILE *f);
double *citireV(unsigned int l,FILE *f);
void afisare(FIRMA *fir,unsigned int **a);


#endif
