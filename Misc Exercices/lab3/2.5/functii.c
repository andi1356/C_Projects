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
			c=a/i;
			s=s+c;
		}
		i=i-1;
	}
	return s;
}

int g(int x)
{
	int sa;
sa=f(x);

	if(sa<x)
	{
		return -1;
	}
	if(sa>x)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

