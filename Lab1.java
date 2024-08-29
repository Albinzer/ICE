1. Write a program to print the area of a triangle having width and height by creating a class
name ‘Triangle’ with parameter in its constructor. ( By C++ or Java )



import java.util.Scanner;  //package

//This is class
public class Triangle{
    double width,height;

  //this is constructor
   public Triangle(double width,double height){
        this.width=width;
        this.height=height;
    }

    //this is method
    public double calculateArea(){
        return 0.5*width*height;
    }

  //this is main function
    public static void main(String[] args){
       double width,height;
       
       Scanner scanner=new Scanner(System.in);
       
       System.out.println("Enter the value of width =");
       width=scanner.nextDouble();
       
       System.out.println("enter the value of height =");
       height=scanner.nextDouble();

      //this is object
       Triangle triangle=new  Triangle (width,height);

       System.out.println("Area of the triangle" + triangle.calculateArea());
       
       scanner.close();
       
    }
}
