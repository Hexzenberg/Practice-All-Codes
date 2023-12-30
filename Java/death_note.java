import java.util.Scanner;
public class death_note
{
  public static void main(String[] args)
  {
      try (Scanner sc = new Scanner(System.in)) {
        int n= sc.nextInt();
        int m= sc.nextInt();
         int b[]= new int[n]; // creating array for number of names each day
            for (int i = 0; i < n; i++)
           { int t= sc.nextInt();
             
             b[i]=t;     //array of number of names each day
                
           } int c=0; int rem=0; String s=""; int u=0;
           
           for (int j = 0; j < n; j++)
           { rem+=b[j];
               if(rem>=m)
               {c=rem/m; u=rem%m;rem= u;s+=c+" ";}
               else
               s+="0 ";
           }
           System.out.println(s);
      }
      
  }   
}

