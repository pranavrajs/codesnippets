#include<stdio.h>

int main()
{
	long long unsigned int t_case,num1,num2,sum,a,n,d;
	scanf("%llu",&t_case);
	while(t_case-->0)
	{
		scanf("%llu %llu %llu",&num1,&num2,&sum);
		n = (sum*2)/(num1+num2);
		printf("%llu\n",n);
		d=(num2-num1)/(n-5);
		a = num1-2*d;
		while(n-->1)
		{
			printf("%llu ",a);
			a+=d;
		}
		printf("%llu\n",a);
	}
}
