#include <stdio.h>
#include "header.h"
int main()
{
	int x,a,b;
	printf("nr1:");
	scanf("%d",&a);
	printf("nr2:");
	scanf("%d",&b);
	x=f(a,b);
	printf("cmmdc: %d\n",x);
	return 0;
}
