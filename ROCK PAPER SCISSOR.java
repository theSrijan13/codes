import java.util.Scanner;
import java.util.Random;

public class Main
{
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter 0 for rock, 1 for paper, 2 for scissor");
		int userInput=sc.nextInt();
		Random random=new Random();
		int compInput=random.nextInt();
		if(userInput==compInput)
		{
		    System.out.println("DRAW....");
		}
		else if(userInput==0 && compInput==2 || userInput==1 && compInput==0 || userInput==2 && compInput==1)
		{
		    System.out.println("YOU WON.....");
		}
		else{
		    System.out.println("COMPUTER WON...");
		}

	}
}
