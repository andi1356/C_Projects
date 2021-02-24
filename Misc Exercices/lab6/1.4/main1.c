#include <stdio.h>
#include <ctype.h>
typedef char SIR[1001];
int main()
{
	SIR s,r;
	int i,m=0;
	fgets(s,1000,stdin);
	if(s[0]=='\n')
	{
		--m;
	}
	else
	{
	for(i=0;s[i]!='\n';++i)
	{
		r[i]=isspace(s[i]);
		if(r[i]!=0)
		{
			m++;
		}
	}
	}
	m++;
	printf("sunt %d cuvinte\n",m);
return 0;
}
