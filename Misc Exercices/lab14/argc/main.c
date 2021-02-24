#include <stdio.h>

int main(int argc,char *argv[], char *env[])
{
	int i;
	for(i=0;env[i] != 0; ++i)
	{
		puts(env[i]);
	}
	return 0;
}
