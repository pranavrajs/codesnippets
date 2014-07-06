#include<stdio.h>

int main()
{

	long long unsigned int num,fact,subs,temp;
	scanf("%llu",&num);
	if(num==1 || num == 0)
	{
		printf("1");
		return 0;
	}
	/*
		For an even number say 8
		8! = 8*7*6*5*4*3*2*1
		which is equal to
		8! = 8*(7*2)*(6*3)*(5*4)

		8! = 8*(8+6)*(14+4)*(18+2)

		For an odd number say 7
		7! = 7*6*5*4*3*2*1
		which is equal to
		7! = 7*(6*2)*(5*3)*4
		7! = 7*(7+5)*(12+3)*ceil(7/2)

	*/
	subs=num-2;
	fact=num;
	temp=fact;
	while(subs>=2)
	{
		temp=temp+subs;
		fact*=temp;
		subs-=2;
	}
	/* If number is odd multiply it with roundUp(num/2) */
	if(num%2!=0)
		fact*=(num/2+1);

	printf("%llu",fact);
}
