 8. Write a program to calculate the volume of a sphere , cube and cylinder.( By C++ or Java )

#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    double pi, rad, h, a;

    // Constructor to initialize the variables
    Shape(double p, double r, double height, double side) {
        pi = p;
        rad = r;
        h = height;
        a = side;
    }

    // Method to calculate and display the volumes
    void volume() {
        cout << "Volume of the sphere: " << (4.0 / 3.0) * pi * pow(rad, 3) << endl;
        cout << "Volume of the cube: " << pow(a, 3) << endl;
        cout << "Volume of the cylinder: " << pi * pow(rad, 2) * h << endl;
    }
};

int main() {
    double pi = 3.14159; // Define the value of pi
    double rad, h, a;

    // Taking inputs from the user
    cout << "Enter the radius of the sphere/cylinder: ";
    cin >> rad;
    cout << "Enter the height of the cylinder: ";
    cin >> h;
    cout << "Enter the side length of the cube: ";
    cin >> a;

    // Creating an object of the Shape class
    Shape shape(pi, rad, h, a);

    // Calling the volume method to display results
    shape.volume();

    return 0;
}
