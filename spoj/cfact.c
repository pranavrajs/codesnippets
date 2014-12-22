#include<stdio.h>

int main()
{
	unsigned long long int num,i,prod=1;
	scanf("%llu",&num);
	for(i=2;i<=num;i++)
		prod*=i;
	printf("%llu",prod);
}
