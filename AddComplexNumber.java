package packagecom.java;

public class AddComplexNumber {

    

        public static void main(String[] args) {
           ComplexNumber complex1 = new ComplexNumber(2.5,3.0);
           ComplexNumber complex2 = new ComplexNumber(1.5,1.0);
           ComplexNumber sum = complex1.add(complex2);
           System.out.println("Sum " + sum.real + " + " + sum.imaginary + "i");
        }}

