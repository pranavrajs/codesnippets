import java.util.Scanner;

class Fctrl
{
	public static void main(String args[])
	{
		int t_case;
		Scanner in = new Scanner(System.in);
		t_case = in.nextInt();
		int num,power;
		int i,sum;
		while(t_case-->0)
		{
			num = in.nextInt();
			sum = 0;
			while(num>=5)
			{
				sum+= num/5;
				num /=5;
			}
			System.out.println(sum);
		}
	}
}
