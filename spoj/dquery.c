#include<stdio.h>

int main()
{
	int num,tnum,arr[1000001],dp[30001];
	scanf("%d",&num);
	int i,n1,n2;
	dp[0] = 0;
	for(i=0;i<1000001;i++)
		arr[i]=0;
	for(i=1;i<=num;i++)
	{
		scanf("%d",&tnum);
		printf("\n%d---%d\n",tnum,arr[tnum]);
		if(arr[tnum] == 1)
			dp[i] = dp[i-1];
		else
		{
			dp[i] = dp[i-1] + 1;
			arr[tnum] = 1;
		}
	}
	for(i=0;i<=5;i++)
	printf("\n%d---",dp[i]);
	scanf("%d",&num);
	while(num-->0)
	{
		scanf("%d %d",&n1,&n2);
		if(n1!=1)
			printf("%d\n",dp[n2]-(dp[n1]-dp[n1-1]));
		else
			printf("%d\n",dp[n2]);

	}
}
