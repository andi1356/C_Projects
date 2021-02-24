#include <stdio.h>

int main(void)
{
	float c,f;
	for(f=0;f<=300;f=f+10)
{
	c=(5*(f-32))/9;
	printf("farenheit:%.2f\tcelsius: %.2f\n",f,c);
}
return 0;
}
