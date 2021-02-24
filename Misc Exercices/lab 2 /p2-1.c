#include <stdio.h>

int main()
{
	int a,b,c,max;
	printf("Numerele sunt:\n ");
		scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		max=a;
	}
	if(b>a&&b>c)
	{
		max=b;
	}
	if(c>a&&c>b)
	{
		max=c;
		printf("cel mai mare numar este %d\n",max);
	}
	else
	{
		printf("nu exista un cel mai mare numar\n");
	}

	return 0;
}


