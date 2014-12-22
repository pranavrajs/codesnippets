#include<stdio.h>

int main()
{
	unsigned long long int num;
	scanf("%llu",&num);
	if((num&(num-1)) == 0)
		printf("TAK\n");
	else
		printf("NIE\n");
	return 0;
}
