import java.util.Scanner;

public class Funsum {
    static void sum(int a,int b){
        System.out.println("The sum of the given two numbers is:"+(a+b));
    }
    public static void main(String arg[]){
        int a,b;
       try (Scanner s=new Scanner(System.in)){
        System.out.println("Enter the two numbers:");
        a=s.nextInt();
        b=s.nextInt();
       }
        sum(a,b);
    }
}
