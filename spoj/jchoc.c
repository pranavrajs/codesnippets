#include<stdio.h>
int main()
{
	unsigned long long int t_case,num,res;
	scanf("%llu",&t_case);

	while(t_case-->0)
	{
		scanf("%llu",&num);
		res = num/2;
		if(num%2==1)
			res++;
		printf("%llu",res);
	}
}
