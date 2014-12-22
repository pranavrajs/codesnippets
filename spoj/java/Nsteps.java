import java.util.Scanner;
import java.math.BigInteger;

class Nsteps
{
	public static void main(String args[])
	{
		int x,y;
		Scanner s = new Scanner(System.in);
		int t_case = s.nextInt();
		while(t_case-->0)
		{
			x = s.nextInt();
			y = s.nextInt();
			if(x!=y)
				if(y == (x-2))
					if(y%2==0)
						System.out.println(2*y+2);
					else
						System.out.println(2*y+1);
				else
					System.out.println("No Number");
			else
				if(y%2==0)
					System.out.println(2*(y-1)+2);
				else
					System.out.println(2*(y-1)+1);
		}
	}
}