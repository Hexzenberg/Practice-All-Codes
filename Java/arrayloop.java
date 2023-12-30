import java.util.Scanner;

public class arrayloop {
    public static void main(String arg[]){
        int[] a=new int[5];
        int i;
        try(Scanner s=new Scanner(System.in)){
            for(i=0;i<5;i++){
                a[i]=s.nextInt();
            }
        }
        System.out.println("The entered array is:");
        for(i=0;i<5;i++){
            System.out.print(" "+a[i]);
        }
    }
}
