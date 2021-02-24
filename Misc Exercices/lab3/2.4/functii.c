#include <stdio.h>
#include "h.h"

int f(int a)
{
	int r,c,s,i;
	i=a;
	s=0;
	while(i!=1)
	{
		r=a%i;
		if(r==0)
		{
			s=s+i;
		}
		i=i-1;
	}
	return s;
}

int g(int a, int b)
{
	int sa,sb;
sa=f(a);
sb=f(b);

	if(a==sb&&b==sa)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

