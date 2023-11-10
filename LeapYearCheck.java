package packagecom.java;

import java.util.Scanner;

public class LeapYearCheck {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int year = scanner.nextInt();
        scanner.close();
        if (isLeapYear(year)){
            System.out.println(year + "is a leap year ");

        }else{
            System.out.println(year + " is not a leap year ");
        }
    }
    public static boolean isLeapYear(int year){
        if(year % 4== 0){
            if (year % 100 != 0 || (year % 100 == 0 && year % 400 == 0)){
                return true;
            }
        }
        return false;
    }}
