#include <iostream>
using namespace std;

class MaxMin {
    int num1;
    int num2;

public:
    MaxMin(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    void findMaxMin() {
        if (num1 > num2) {
            cout << "Maximum: " << num1 << endl;
            cout << "Minimum: " << num2 << endl;
        } else {
            cout << "Maximum: " << num2 << endl;
            cout << "Minimum: " << num1 << endl;
        }
    }
};

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    MaxMin maxMin(num1, num2);
    maxMin.findMaxMin();

    return 0;
}
