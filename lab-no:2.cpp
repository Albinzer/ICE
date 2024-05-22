#include<iostream>
using namespace std;

//this is a class
 class Numsum{
     public:
    int num1,num2,num3;

//this is a constructor
    Numsum( int n1,int n2,int n3){
         num1=n1;
         num2=n2;
         num3=n3;
    }

//this is actually a method
    int  calculateSum(){
         return num1+num2+num3;
    }
 };

//this is a main function
    int main(){
        int num1,num2,num3;
        
        cout<< "Enter the value of num1 :" ;
        cin>> num1;
        cout<< "Enter the vakue of num2 :";
        cin>> num2;
        cout <<"Enter the value of num3:";
        cin>> num3;

     // this is a object
        Numsum sum(num1,num2,num3);
        cout<<"Sum of the three value"<<sum.calculateSum() << endl;
        return 0;
    }
