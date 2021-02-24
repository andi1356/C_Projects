#include <stdio.h>
#include <math.h>
int main()
{
	double x,r;
	printf("Necunoscuta este: ");
	scanf("%lf",&x);
	if(x<=2)
	{
		r=x*x+3*x+5;
		printf("ecuatia este de forma 'x*x+3*x+5' iar rezultatul ei este: %lf \n",r);
	}
	else
	{
	if(x>=8)
	{
		r=pow(M_E,x)+2;
		printf("ecuatia este de forma 'e^x+5' iar rezultatul ei este: %lf \n",r);
	}
	else
		{
			r=3*x;	
		printf("ecuatia este de forma '3*5' iar rezultatul ei este: %lf \n",r);
	}
	}
return 0;
}
