import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		System.out.println("Hello World");
		Scanner sc=new Scanner(System.in);
        	float tax=0;
		float income=sc.nextFloat();
		
		if(income<2.5f)
		{
		    tax=tax+ 0;
		}
		if(income>2.5f && income<=5f)
		{
		    tax= tax+ 0.05f *(income- 2.5f);
		    
		}
		else if(income>5.0f && income<=10.0f)
		{
		    tax=tax+ 0.05f *(5.0f - 2.5f);
		    tax= tax + 0.2f * (income - 5f);
		}
		else if(income> 10.0f)
		{
		    tax=tax+ 0.05f *(5.0f - 2.5f);
		    tax=tax+ 0.2f *(10.0f - 5f);
		    tax=tax + 0.3f *(income- 10f);
		}
		
	}
}
