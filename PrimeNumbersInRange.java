package packagecom.java;
import java.util.Scanner;
public class PrimeNumbersInRange {
 public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter the value of N ");
    int N = scanner.nextInt();
    scanner.close();
    System.out.println("Prime numbers between 1 and " + N + " ");
    for (int i = 2; i <= N; i++){
        if(isPrime(i)){
            System.out.print(i + " ");
        }
    }
 }  
 public static boolean isPrime(int number){
    if (number <= 1){
        return false;
    }
    if (number <= 3){
        return true;
    }
    if (number % 2 == 0 || number % 3 == 0){
        return false;
    }
    for(int i = 5; i * i <= number; i += 6){
        if (number % i == 0 || number % (i + 2) == 0){
            return false;
        }
    }
    return true;
 } 
}
