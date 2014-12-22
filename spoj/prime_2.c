#include<stdio.h>
int main()
{
	long long int l_lim,h_lim,num,i;
	int t_case,flag=0;
	scanf("%d",&t_case);
	while(t_case-->0)
	{
		scanf("%Ld %Ld",&l_lim,&h_lim);
		if((l_lim==1&&h_lim>=2)||l_lim==2){
			printf("2\n");
			l_lim=3;
		}
		while(l_lim<=h_lim)
		{
			i=i/2;
			while(i>=2)
			{	
				if(l_lim%i==0)
				{
					flag=1;
					break;
				}
				i--;
			}
			if(!flag)
				printf("%Ld\n",l_lim);
			flag=0;
			l_lim++;
		}
	}
	return 0;
}