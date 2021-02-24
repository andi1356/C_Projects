#include <stdio.h>

int main()
{
	int b,sir,dif,min;
	printf("Numarul central este:");
	scanf("%d",&b);
	printf("sirul este:\n");
	scanf("%d",&sir);
	min=sir;
	while(sir>=0)
	{
		dif=sir-b;
		scanf("%d",&sir);
		if(dif<min)
		{
			min=dif;
		}
	}
	printf("cel mai apropiat nr: %d\n",min);
	return 0;
}
