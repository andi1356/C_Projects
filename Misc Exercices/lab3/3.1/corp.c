#include <stdio.h>
#include "h.h"
int main()
{
	int n,i,prec,s,sir;
	printf("numarul de nr este:");
	scanf("%d",&n);
	s=0;
	i=1;
	scanf("%d",&prec);
	do
	{
		scanf("%d",&sir);
		if(prec<sir)
		{
			s=s+1;
		}
		if(prec>sir)
		{
			s=s-1;
		}
		prec=sir;
		i=i+1;
	}while(i<n);
	printf("suma %d",s);
		
	return s;
}
