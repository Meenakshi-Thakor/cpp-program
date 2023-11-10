package packagecom.java;

public class EvenFibonacciSum {
 public static void main(String[] args){
    int n = 4000000;
    long a = 1, b = 2, sum = 0;
    while (b <= n){
        if (b % 2 == 0){
            sum += b;
        }
        long temp = a + b;
        a = b;
        b = temp;
    }
    System.out.println("Sum of even fibonacci numbers up to " + n + " is: " + sum);
} 
 }   

