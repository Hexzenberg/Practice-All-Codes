import java.util.Scanner;

public class Multidimensionalarray {
    public static void main(String arg[]){
        int n,i,j,m;
        Scanner s=new Scanner(System.in);
        System.out.print("Enter the order of the fisrt matrix:");
        n=s.nextInt();
        int[][] a=new int[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                System.out.print("Enter the element of a["+(i+1)+"]["+(j+1)+"]:");
                a[i][j]=s.nextInt();
            }
        }
        System.out.println("The Entered matrix is:");
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                System.out.print(a[i][j]+" ");
            }System.out.println("");
        }System.out.print("Enter the order of the second matrix:");
        m=s.nextInt();
        int[][] b=new int[m][m];
        int[][] g=new int[n][n];
        for(i=0;i<m;i++){
            for(j=0;j<m;j++){
                System.out.print("Enter the element of b["+(i+1)+"]["+(j+1)+"]:");
                b[i][j]=s.nextInt();
            }
        }
        System.out.println("The Entered matrix is:");
        for(i=0;i<m;i++){
            for(j=0;j<m;j++){
                System.out.print(b[i][j]+" ");
            }System.out.println("");
        }
        if(n==m){
            System.out.println("The sum of the matrices:");
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    System.out.print((a[i][j]+b[i][j])+" ");
                }System.out.println("");
            }
            System.out.println("The product of the matrices:");
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    g[i][j]=0;
                    for(int k=0;k<n;k++){
                        g[i][j]+=a[i][k]*b[k][j];
                    }
                }
            }
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    System.out.print(g[i][j]+" ");
                }System.out.println("");
            }
        }else System.out.println("The addition and multiplication of the matrices is not possible as their order is not the same.");
    }
}
