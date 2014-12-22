#include<stdio.h>

int main()
{
	int i,arr[10],min;
	char str[100001];
	while(1)
	{
		scanf("%s[^\n]",str);
		if(str[0]=='0')
			return 0;
		for(i=0;i<10;i++)
			arr[i]=0;
		for(i=0;str[i]!='\0';i++)
			arr[str[i]-'0']++;
		if(arr[0]==0)
			printf("0\n");
		else
		{
			min = 1;
			for(i=2;i<10;i++)
				if(arr[i]<arr[min])
					min=i;
			for(i=0;i<arr[min]+1;i++)
				printf("%d",min);
			printf("\n");
		}
	}
	return 0;
}
