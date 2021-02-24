#include <stdio.h>
int main()

{
	enum zile{luni=2,marti,miercuri,joi,vineri,sambata,duminica};

	enum zile azi;
	printf("ce zi e astazi?");
	scanf("%d",&azi);
	if(azi<2)
	{
		printf("gresit\n
				");
	}
	else{
	if(azi==sambata || azi==duminica)
	{
		printf("relax\n");
	}
	else
	{
		printf("scoala\n");
	}
	return 0;
	}
}
