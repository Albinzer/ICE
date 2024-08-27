import java.util.Scanner;

class VolumeCalculator {

    double calculateSphereVolume(double radius) {
        return (4.0 / 3.0) * Math.PI * Math.pow(radius, 3);
    }

    double calculateCubeVolume(double side) {
        return Math.pow(side, 3);
    }

    double calculateCylinderVolume(double radius, double height) {
        return Math.PI * Math.pow(radius, 2) * height;
    }
}

public class Main {
    public static void main(String[] args) {
        VolumeCalculator vc = new VolumeCalculator();
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the radius of the sphere: ");
        double radius = sc.nextDouble();
        System.out.println("Volume of Sphere: " + vc.calculateSphereVolume(radius));

        System.out.print("Enter the side of the cube: ");
        double side = sc.nextDouble();
        System.out.println("Volume of Cube: " + vc.calculateCubeVolume(side));

        System.out.print("Enter the radius of the cylinder: ");
        radius = sc.nextDouble();
        System.out.print("Enter the height of the cylinder: ");
        double height = sc.nextDouble();
        System.out.println("Volume of Cylinder: " + vc.calculateCylinderVolume(radius, height));
    }
}
