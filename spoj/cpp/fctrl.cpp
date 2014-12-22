#include<iostream>
using namespace std;

int main()
{
	long long int t_case,num,sum;
	cin>>t_case;
	while(t_case-->0)
	{
		cin>>num;
		sum=0;
		while(num>=5)
		{
			sum += num/5;
			num /=5;
		}
		cout<<sum<<endl;
	}
	return 0;
}
