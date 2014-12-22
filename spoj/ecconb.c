#include<stdio.h>

int main()
{
	unsigned long long int num;
	int t_case;
	scanf("%d",&t_case);
	while(t_case-->0)
	{
		scanf("%llu",&num);
		printf("%llu",~num);
	}
}
