#ifndef header_h
#define header_h
typedef struct _timp{
	int ora;
	int min;
	int sec;
}timp;

timp suma(timp x,timp y);
timp diferenta(timp x, timp y);
void program(timp a,timp b,timp c,timp d,timp r);
#endif
