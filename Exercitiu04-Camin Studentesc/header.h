#ifndef HEADER_H_
#define HEADER_H_


int **citireMatrice(int n,int m);
void dealoc2d(int **a,int n);
double **rezMatrice(int **a,int n,int m,double c);
void afisare(int lflag,int tflag,int pflag,int **a,double **b,int n,int m,double c,FILE *f);
int rezL(int **a,int n,int m);
double rezT(int **a,int n,int m,double c);
int *rezP(int **a,int n,int m);
#endif
