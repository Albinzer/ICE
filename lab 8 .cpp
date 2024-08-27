#include <iostream>
#include <cmath>
using namespace std;

class VolumeCalculator {
public:
    double calculateSphereVolume(double radius) {
        return (4.0 / 3.0) * M_PI * pow(radius, 3);
    }

    double calculateCubeVolume(double side) {
        return pow(side, 3);
    }

    double calculateCylinderVolume(double radius, double height) {
        return M_PI * pow(radius, 2) * height;
    }
};

int main() {
    VolumeCalculator vc;
    double radius, side, height;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;
    cout << "Volume of Sphere: " << vc.calculateSphereVolume(radius) << endl;

    cout << "Enter the side of the cube: ";
    cin >> side;
    cout << "Volume of Cube: " << vc.calculateCubeVolume(side) << endl;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    cout << "Volume of Cylinder: " << vc.calculateCylinderVolume(radius, height) << endl;

    return 0;
}
