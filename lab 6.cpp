6. Write a program to input two strings and add them.( By C++ or Java )


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2, result;

    // Input the first string
    cout << "Enter the first string: ";
    getline(cin, str1);

    // Input the second string
    cout << "Enter the second string: ";
    getline(cin, str2);

    // Concatenate the strings
    result = str1 + str2;

    // Output the result
    cout << "The concatenated string is: " << result << endl;

    return 0;
}
