#include<iostream>
using namespace std;

#include<stdio.h>
int main()
{
	long long unsigned int t_case,num;
	scanf("%llu",&t_case);
	long long unsigned int sum;
	while(t_case--){
		scanf("%llu",&num);
		sum =0;
		if(num!=1)
			for(int i=1; i*i<=num;i++)
				if(num%i==0){
					sum+=i;
					if(num/i!=i && num/i!=num)
						sum+=num/i;
				}
		printf("%llu\n",sum);	
	}	
	return 0;
}
