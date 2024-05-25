#include <iostream>
using namespace std;

class VolumeOfSphere {

public:
    float pi;
    float radius;

    // Constructor 
    VolumeOfSphere(float piValue, float radiusValue) {
        pi = piValue;     
        radius = radiusValue;  
    }

    // Method 
    float calculateVolumeOfSphere() {
        return (4.0 / 3.0) * pi * radius * radius * radius;
    }
};

int main() {
    float pi, radius;

    cout << "Enter the value of pi: ";
    cin >> pi;
    cout << "Enter the value of radius: ";
    cin >> radius;

    //  object 
    VolumeOfSphere volSp(pi, radius);

    // Call the method 
    cout << "Result of the volume of sphere: " << volSp.calculateVolumeOfSphere() << endl;

    return 0;
}
