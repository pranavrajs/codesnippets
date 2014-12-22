import java.util.Scanner;
import java.math.BigInteger;

class Smallfact
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		BigInteger fact;
		int t_case,num,i;
		t_case = s.nextInt();
		while(t_case-->0)
		{
			num = s.nextInt();
			fact = new BigInteger("1");
			for(i=2;i<=nnum;i++)
				fact = fact.multiply(BigInteger.valueOf(i));
			System.out.println(fact);
		}
	}
}