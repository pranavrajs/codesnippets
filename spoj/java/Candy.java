import java.util.Scanner;

class Candy
{
	public static void main(String args[]){
		//Candy
		int num;
		int[] arr = new int[10001];
		Scanner in = new Scanner(System.in);
		while((num = in.nextInt())!=-1)
		{
			int i=0,sum=0,lim=0;
			int snum = num;
			while(snum-->0)
			{
				arr[lim++]=in.nextInt();
				sum+=arr[lim-1];
			}
			if(sum%num!=0)
				System.out.println("-1");
			else
			{
				int moves=0;
				for(i=0;i<lim;i++)
					if(arr[i]<(sum/num))
						moves+=sum/num-arr[i];
				System.out.println(moves);
			}

		}
	}
}
