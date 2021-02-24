#include <stdio.h>

int main(void)
{
	float x,p;
	p=1;
	x=1;
	while(x!=0)
	{
		p=p*x;
		scanf("%f",&x);
		
	}
	printf("produsul lor este:%.2f\n",p);
	return 0;
}
