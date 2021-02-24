#include <stdio.h>
#include "header.h"

timp suma(timp x,timp y)
{
	timp r;
	r.sec=x.sec+y.sec;
	r.min=x.min+y.min;
	r.ora=x.ora+y.ora;

	if(r.sec>=60)
	{
		++r.min;
		r.sec=r.sec-60;
	}
	if(r.min>=60)
	{
		++r.ora;
		r.min=r.min-60;
	}

	return r;
}


timp diferenta(timp x,timp y)
{
	timp r;
	r.sec=x.sec-y.sec;
	r.min=x.min-y.min;
	r.ora=x.ora-y.ora;
	if(r.sec<0)
	{
		--r.min;
		r.sec=60+r.sec;
	}
	if(r.min<0)
	{
		--r.ora;
		r.min=60+r.min;
	}
return r;
}




