#include <iostream>
using namespace std;

class GPA_Calculator {
public:
    float calculateGPA(int marks[], int numSubjects) {
        float total = 0.0;
        for (int i = 0; i < numSubjects; i++) {
            total += marks[i];
        }
        return total / numSubjects / 10.0; // Assuming the GPA scale is out of 10
    }
};

int main() {
    int numSubjects;

    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    int marks[numSubjects];
    for (int i = 0; i < numSubjects; i++) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
    }

    GPA_Calculator gpaCalculator;
    float gpa = gpaCalculator.calculateGPA(marks, numSubjects);

    cout << "Your GPA is: " << gpa << endl;

    return 0;
}
