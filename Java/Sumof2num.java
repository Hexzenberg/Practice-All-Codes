import java.util.Scanner;

public class Sumof2num{
    public static void main(String arg[]){
        int a,b;
        try (Scanner s=new Scanner(System.in)) {
            System.out.println("Enter the  two numbers:");
            a=s.nextInt();
            b=s.nextInt();
        }
        System.out.println("The Sum of two numbers is:"+(a+b));
    }
}
