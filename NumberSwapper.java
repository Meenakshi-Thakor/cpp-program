package packagecom.java;




public class NumberSwapper {
    private int num1;
    private int num2;
    public NumberSwapper(int num1, int num2){
        this.num1 = num2;
        this.num2 = num1;
    }
    public void swapNumbers(){
        int temp = num1;
        num2 = temp;
    }
    public int grtNum1(){
return num1;
    }
    public int getNum2(){
        return num2;
    }
}