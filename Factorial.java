package packagecom.java;

public class Factorial {
    public static void main(String[] args) {
        int number = 8;
        long factorial = 1;
        if (number < 0){
            System.out.println("Factorial is not defined for negative numbers ");
         }else{
            for (int i = 1; i <= number; i++){
                factorial *= i;
            }
            System.out.println("Factorial of " + number + " is " + factorial);
         }
    }
}
