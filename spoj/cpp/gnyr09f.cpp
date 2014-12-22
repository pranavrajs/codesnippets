#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;

#define SS scanf
int main()
{

	int t_case;
	SS("%d",&t_case);
	unsigned long long int dnum,n,k;
	while(t_case--){

		SS("%llu %llu %llu",&dnum,&n,&k);

		vector<unsigned long long int> dp1(k+1,0);
		vector<unsigned long long int> dp2(k+1,0);
		

		dp1[0]=2;
		dp2[0]=3;
		dp2[1]=1;

		while(n-->2){

			for(int j=k;j>=1;j--)
				dp1[j]+=dp2[j]+dp2[j-1]-dp1[j-1];
			dp1[0]+=dp2[0];
//			printf("%llu %llu\n",dp1[0],dp2[0]);			
			dp1.swap(dp2);
		}
		printf("%llu %llu\n",dnum,dp2[k]);
	}
	return 0;
}
