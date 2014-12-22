#include<stdio.h>

int main()
{
		int x,y,t_case;
		scanf("%d",&t_case);
		while(t_case-->0)
		{
			scanf("%d %d",&x,&y);
			if(x!=y)
				if(y == (x-2))
					if(y%2==0)
						printf("%d\n",2*y+2);
					else
						printf("%d\n",2*y+1);
				else
					printf("No Number\n");
			else
				if(y%2==0)
					printf("%d\n",2*(y-1)+2);
				else
					printf("%d\n",2*(y-1)+1);
		}
		return 0;
}