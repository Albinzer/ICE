#include <iostream>
using namespace std;

// this is class
class Triangle{
public:

float width,height;

//this is constructor
Triangle(float w,float h){
width=w;
height=h;
}

//this is method
float calculateArea() {
return 0.5*width*height;
}
};

//this is main function
int main() {
float width,height;
  
cout << ("Enter the value of a width=");
cin >> width;
cout << ("Enter the value of a height=");
cin >> height ;

//this is object
Triangle tri (width,height);
cout << "Area of the Triangle" << tri.calculateArea() << endl;
return 0;
}


