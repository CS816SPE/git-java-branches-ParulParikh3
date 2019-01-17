import java.util.Scanner;

public class cal
{
	public static void main(String args[])
	{
		float a,b,res;
		char choice;
		//System.out.println("enter your choice");
		Scanner scan=new Scanner(System.in);

		do
		{
			System.out.println("1. ADD TWO NUMBER");
			System.out.println("2.EXIT");
			System.out.println("Enter your choice : ");
			choice=scan.next().charAt(0);
			switch(choice){
				case '1' :  System.out.print("Enter Two Number : ");
							a=scan.nextFloat();
							b=scan.nextFloat();
							res=a+b;
							System.out.println("Result = " + res);
							break;

				case '2' :  System.exit(0);
							break;

				default :   System.out.print("INVALID CHOICE!!\n");
							break;						
			}
			System.out.print("\n-------------------------------\n");
		}while(choice != 2);

	}
}