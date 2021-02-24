#include <stdio.h>
#include "header.h"

int main()
{
	timp x;
	timp y;
	timp s,d;
	scanf("%d%d%d",&x.ora,&x.min,&x.sec);
	scanf("%d%d%d",&y.ora,&y.min,&y.sec);
	s=suma(x,y);
	d=diferenta(x,y);
	printf("suma este: %d:%d:%d\n",s.ora,s.min,s.sec);
	printf("diferenta este: %d:%d:%d\n",d.ora,d.min,d.sec);
	return 0;
}
