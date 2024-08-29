2. Write a program to print the sum of the three numbers entered by user by creating a class and
method.( By C++ or Java )



import java.util.Scanner;

// CLASS
public class NumSum{
    int num1,num2,num3;

  //
    NumSum(int n1,int n2,int n3){
        this.num1=n1;
        this.num2=n2;
        this.num3=n3;
    }
     public int calculateSum (){
        return num1+num2+num3;
    }

    public static void main(String[] args){
        int num1,num2,num3;
        Scanner scanner=new Scanner(System.in);
        System.out.println("Enter the value of num1");
        num1=scanner.nextInt();
        System.out.println("Enter the value of num2");
        num2=scanner.nextInt();
        System.out.println("Enter the value of num3");
        num3=scanner.nextInt();
    NumSum nsum=new NumSum(num1,num2,num3);
    System.out.println("Sum of the three number" + nsum.calculateSum());
    scanner.close ();
}
}
