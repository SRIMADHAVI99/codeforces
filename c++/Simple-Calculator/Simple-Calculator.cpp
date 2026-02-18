import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner scan = new Scanner(System.in);
        long a = scan.nextInt();
        long b = scan.nextInt();
        long sum , sub ;
        long  mul;
         sum=a+b;
         mul=a*b;
         sub=a-b;
        System.out.println( + a + " + " + b + " = "+ sum);
        System.out.println( + a + " * " + b + " = "+ mul);
        System.out.println( + a + " - " + b + " = "+ sub);
       
	}
}
