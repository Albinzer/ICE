#include<bits/stdc++.h>

using namespace std;

//CLASS
class AddString {
public:

    string str1;
    string str2;


   // CONSTRUCTOR
    AddString(string s1, string s2) {
        str1 = s1;
        str2 = s2;
    }

    //METHOD
    string addTwoString() {
        return str1 + str2;
    }
};
 //MAIN FUNCTION 
int main() {
    string str1, str2;

    cout << "Enter the 1st string: ";
    cin >> str1;
    cout << "Enter the 2nd string: ";
    cin >> str2;

    //OBJECT
    AddString add(str1, str2);

    
    cout << "Result of adding the two strings: " << add.addTwoString() << endl;

    return 0;
}


