#include<stdio.h>

int main()
{
	int num;
	scanf("%d",&num);
	while(num!=42)
	{
		printf("%d\n",num);
		scanf("%d",&num)
	}
	return 0;
}