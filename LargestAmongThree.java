package packagecom.java;
import java.util.Scanner;
public class LargestAmongThree {
   public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the first number ");
    double num1 = scanner.nextDouble();
    System.out.print("Enter the second number ");
    double num2 = scanner.nextDouble();
    System.out.print("Enter the third number ");
    double num3 = scanner.nextDouble();
    scanner.close();
    double largest;
    if (num1 >= num2 && num1 >= num3){
        largest = num1;
    }else if (num2 >= num1 && num2 >= num3){
        largest = num2;
    } else {
        largest = num3;
    }
    System.out.println("The largest number is " + largest);
   } 
}
