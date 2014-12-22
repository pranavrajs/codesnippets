#include<iostream>
using namespace std;
#include<stdio.h>

int primeFactors(long long unsigned int num)
{
	int count;
	while(num%2==0){
		num=num/2;
	}
	for(long long unsigned int i=3;i*i<=num;i=i+2){
		count=0;
		while(num%i==0){
			if(i%4==3)
				count++;
			num/=i;
		}
		if(count%2!=0)
			return 0;
	}
	if(num>2)
		if(num%4==1)
			return 1;
		else
			return 0;
	return 1;
}
int main()
{
	long long unsigned int num;
	int t_case;
	scanf("%d",&t_case);
	while(t_case-->0)
	{
		scanf("%llu",&num);
		if(primeFactors(num))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
