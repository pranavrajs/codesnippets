#include<stdio.h>
#include<string.h>
int main()
{
	int t_case;
	int arr[21];
	char str[30001],buff[21];
	scanf("%[^\n]s",str);

	int pcount=1,k=1,j,count=0,prevdata=-1;

	for(j=0;str[j]!='\0';j++)
		if(str[j]==' '||str[j]=='\t')
			pcount++;

	while(k++<pcount)
	{
		sscanf(str,"%s",buff);
		printf("%s\n",buff);

		strcpy(str,str+strlen(buff)+1);
		if(prevdata == strlen(buff) || prevdata == -1)
			count++;
		else
			if(arr[prevdata] < count)
				arr[prevdata] = count;
		prevdata = strlen(buff);
	}
	int i;
	for(i=0;i<21;i++)
		printf("\n %d  -- %d \n",i,arr[i]);
}
