#include<stdio.h>
#include<stdlib.h>

#define LIMIT 10000000

int main()
{
	unsigned long long int i,j;
	int *prime;

	prime = malloc(sizeof(int)*LIMIT);

	/* FILL ARRAY WITH 1 */
	for(i=2;i<LIMIT;i++)
		prime[i]=1;

	/*	Start with 2
		If prime[i] is set , mark all the multiples of prime[i] as 0
		else advance to next number
	*/

	for(i=2;i<LIMIT;i++)
		if(prime[i])
			for(j=i;i*j<LIMIT;j++)
				prime[i*j]=0;

	/*
		Print all numbers which are set
	*/
	for(i=2;i<LIMIT;i++)
		if(prime[i])
			printf("%llu\t",i);

	return 0;
}
