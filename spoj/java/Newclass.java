import java.util.*;
import java.io.*;
import java.math.*;
public class Newclass 
{
	public static void main(String args[]) throws IOException
	{
		Scanner s = new Scanner(System.in);		
		BigInteger num1,num2;
		
		int t_case = s.nextInt();
		while(t_case-->0)
		{
			num1 = s.nextBigInteger();
			num2 = s.nextBigInteger();
			System.out.println((num1.add(num2)).divide(new BigInteger("2")));
			System.out.println((num1.subtract(num2)).divide(new BigInteger("2")));
		}

	}
}
