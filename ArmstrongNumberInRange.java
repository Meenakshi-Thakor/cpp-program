package packagecom.java;

import java.util.Scanner;

public class ArmstrongNumberInRange {
    public static void main(String[] args) {
      Scanner scanner = new Scanner(System.in);
      System.out.print("Enter the lower bound ");
      int lowerBound = scanner.nextInt();
      System.out.print("Enter the upper bound ");
      int upperBound = scanner.nextInt();
      scanner.close();
    System.out.println("Armstrong numbers between " + lowerBound + " and " + " are ");
      for (int i = lowerBound; i <= upperBound; i++){
        if (isArmstrongNumber(i)){
            System.out.println(i);
        }
      }
    }
    public static boolean isArmstrongNumber(int number){
        int originalNumber, remainder, result = 0;
        int n = 0;
        originalNumber = number;
        while (originalNumber != 0){
            originalNumber /= 10;
        }
        originalNumber = number;
        while (originalNumber != 0){
            remainder = originalNumber % 10;
            result += Math.pow(remainder,n);
            originalNumber /= 10;
        }
        return result == number;

    }
}
