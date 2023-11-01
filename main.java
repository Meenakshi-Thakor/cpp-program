package packagecom.java;
class Vehicle {
    protected String brand = " Hyundai" ;
    public void honk() {
        System.out.println(" Tuk tuk!! ");
    }
}

class Car extends Vehicle {
    private String modelName =   " verna";

    public static void main(String[] args) {
        Car myCar = new Car();
        myCar.honk();
        System.out.println(myCar.brand + " " + myCar.modelName);
    }
}
