9. Write a program to display the following pattern ( By C++ or Java )
1 1 1 1 2 1 1 3 3 1 1 4 6 4 1


#include <iostream>
using namespace std;

int main() {
    int rows = 4, coef = 1;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            cout << coef << " ";
        }
    }
    cout << endl;
    return 0;
}
