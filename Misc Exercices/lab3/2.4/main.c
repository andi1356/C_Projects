#include <stdio.h>
#include "h.h"
int main()
{
	int x,y,i,j;
scanf("%d%d",&x,&y);
for(i=x;i<y;i++)
{
	for(j=i+1;j<=y;j++)
		{
			if(g(i,j))
			{
			printf("%d si %d sunt prietene \n",i,j);
			}
		}
}
return 0;
}
