#include<stdio.h>
#include<string.h>
int main()
{
		int i,j,t_case,lim,l_num,r_num;
		char arr[300];
		scanf("%d",&t_case);
		while(t_case!=0)
		{

			scanf("%s",arr);
			r_num = t_case-1;
			l_num = 0;
			for(i=0;i<t_case;i++)
			{
				lim = i;
				printf("%c",arr[lim]);
				while(lim<strlen(arr))
				{
					lim+= 2*r_num+1;
					if(lim < strlen(arr))
						printf("%c",arr[lim]);
					else
						break;
					lim+= 2*l_num+1;
					if(lim < strlen(arr))
						printf("%c",arr[lim]);
					else
						break;
				}	
				l_num++;
				r_num--;
			}
			printf("\n");
			scanf("%d",&t_case);
		}
		return 0;
}	