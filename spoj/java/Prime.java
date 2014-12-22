import java.util.Scanner;
import java.math.BigInteger;

class Prime
{
	public static void main(String args[])
	{
		BigInteger num1,num2;
		int limit = 1000000000,i;
		boolean isPrime[] = new boolean[limit*10];
		for(i=2;i<=limit*10;i++)
			isPrime[i]=true;
		if(isPrime[limit*10-1])
			System.out.println("true");
		for(i=2;i*i<limit*10;i++)
		{
			if(isPrime[i])
			{

			}
		}
	}
}