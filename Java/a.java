import java.util.Scanner;

public class a {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt(); // Number of integers in the array
        int[] arr = new int[n]; // Array to store the integers

        // Read the integers into the array
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        int x = arr[0];

        // Find the bitwise AND of all integers in arr
        for (int i = 1; i < n; i++) {
            x &= arr[i];
        }

        int y = x;

        System.out.println(y);
    }
}
