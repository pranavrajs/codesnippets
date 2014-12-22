#include<iostream>
using namespace std;

#include<stdio.h>

int main()
{
	long int t_case;
	long long int a[]={2, 4, 9, 16, 25, 64, 289, 729, 1681, 2401, 3481, 4096, 5041, 7921, 10201, 15625, 17161, 27889, 28561, 29929, 65536, 83521, 85849, 146689, 262144, 279841, 458329, 491401, 531441, 552049, 579121, 597529, 683929, 703921, 707281, 734449, 829921, 1190281};
	long long int num1,num2;
	scanf("%ld",&t_case);
	while(t_case--){
		scanf("%lld %lld",&num1,&num2);
		int count=0;
		for(int i=0;i<39;i++){
			if(a[i]<=num2&&a[i]>=num1)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
