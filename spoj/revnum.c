#include<stdio.h>

long long int reverse(long long int num)
{
	long long int rev_num = 0;
	while(num>0)
	{
		rev_num = rev_num*10 +num%10;
		num = num / 10;
	}
	return rev_num;
}

int main()
{
	long long int opr1,opr2;
	int t_case;

	scanf("%d",&t_case);
	while(t_case-->0)
	{
		scanf("%Ld %Ld",&opr1,&opr2);
		printf("%Ld\n", reverse(reverse(opr1) + reverse(opr2)));
	}
	return 0;
}