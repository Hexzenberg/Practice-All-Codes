import java.util.Scanner;
public class Armstrongnumber
{
    public static void main(String args[])
    {
        int n,c=0,t,a=0;
        Scanner s=new Scanner(System.in);
        System.out.print("Enter a number to check it's Armstrong number or not\n");
        n=s.nextInt();
        t=n;
        if(n>0) c=(int)Math.log10(n)+1;
        else if(n==0) c=1;
        else c=(int)Math.log10(-n)+1;
        System.out.println("The number of digits of the entered number is: "+c);
        for(int i=1;i<=c;i++){
            a+=Math.pow((t%10), c);
            t/=10;
        }
        if(a==n) System.out.println("The entered number is an Armstrong Number");
        else System.out.println("The entered number is not an Armstrong Number");
    }
}
