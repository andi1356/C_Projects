#ifndef header_h_
#define header_h_

void citesteValori(int nv,int nc, double hotel[][30]);
void afiseazaValori(double hotel[][30],int nv,int nc);
double medieUltimaColoana(int nv,int nc,double hotel[][30]);
void citireFisier(double hotel[30][30],FILE *f,int *i,int *j);
void afisareFisier(double hotel[30][30],int ii,int jj,double hotelF[30][30],int iiF,int jjF);
#endif
