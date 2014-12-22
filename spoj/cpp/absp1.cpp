#include<iostream>
using namespace std;

#include<stdio.h>

int main()
{	
	int t_case;
	scanf("%d",&t_case);
	int lim;
	long long unsigned int arr[10001],diff[10001];
	while(t_case--){
		scanf("%d",&lim);
		for(int i=0;i<lim;i++)
			scanf("%llu",&diff[i]);
		
		for(int i=0;i<lim;i++)			
			diff[i]=diff[i]-diff[i+1];

		long long unsigned int sum=0;
		lim--;
		while(lim>1){
			for(int i=1;i<lim;i++){
				if(diff[i-1]<0)
					sum-=diff[i-1];
				else
					sum+=diff[i-1];

				diff[i-1]=diff[i-1]+diff[i];
			}
			lim--;
		}
		sum+=diff[1];
		cout<<sum<<endl;
	}	
}
