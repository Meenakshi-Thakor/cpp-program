package packagecom.java;
import java.util.Scanner;
public class input {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter yoyr name: ");
        String userName = scanner.nextLine();
        System.out.println("hello, " + userName + "!");
        scanner.close();
    }
    
}
