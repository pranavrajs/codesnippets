#include<iostream>
#include<cstring>
using namespace std;

#include<stdio.h>
int minfn(int a,int b,int c)
{
	int min = a;
	if(a>b)
		min=b;
	if(min>c)
		min = c;
	return min;
}
void editDistance(char* str1,char* str2)
{

		static int mat[2002][2002];
		int m,n,cost;
		m = strlen(str1);
		n = strlen(str2);
		if(m==0)
		{
			cout<<n<<endl;
			return;
		}
		if(n==0)
		{
			cout<<m<<endl;
			return;
		}
		for(int i=0;i<m+1;i++)
			mat[i][0]=i;

		for(int i=0;i<n+1;i++)
			mat[0][i]=i;

		for(int i=1;i<n+1;i++)
			for(int j=1;j<m+1;j++)
			{
				if(str1[j-1] == str2[i-1])
					cost = 0;
				else
					cost = 1;
				mat[j][i] = minfn(mat[j-1][i-1]+cost , mat[j-1][i]+1 , mat[j][i-1]+1);
			}
		cout<<mat[m][n]<<endl;
		return;
}
int main()
{
	int t_case;
	char str1[2001],str2[2001];
	std::cin>>t_case;
	while(t_case-->0)
	{
		scanf("%s",str1);
		scanf("%s",str2);
		editDistance(str1,str2);
	}
	return 0;
}

