package packagecom.java;
import java.util.Scanner;
public class GCD
 {
   public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the first number ");
        int num1 = scanner.nextInt();
        System.out.print("Enter the second number ");
        int num2 = scanner.nextInt();
        scanner.close();
        int gcd = findGCD(num1,num2);
        long lcm = (long) (num1 * num2) / gcd;
        System.out.println("LCM of " + num1 + "and" + num2 + "is " + lcm);
    }
    public static int findGCD(int num1,int num2){
        while (num2 != 0){
            int temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }
        return num1;
    }
   } 

