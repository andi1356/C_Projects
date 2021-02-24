#include <stdio.h>

int main(void)
{
	int n,x,s,i;
	printf("numarul de numere este: ");
	scanf("%d",&n);
	s=0;
	for(i=1;i<=n;i++)
	{
		printf("numarul %d este:",i);scanf("%d",&x);
		s=s+x;
	}
	printf("suma numerelor este: %d\n",s);
	return 0;
}

