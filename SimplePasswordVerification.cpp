//Program 10
#include <iostream>
#include <string>
using namespace std;

int main() {
    string originalPassword = "Harry";
    string userInput;

    cout << "Enter password: ";
    cin >> userInput;

    if (userInput.length() != originalPassword.length()) {
        cout << "Access denied. Wrong password length." << endl;
        return 0;
    }

    int i = 0;
    bool isMatch = true;

    
    while (i < originalPassword.length()) {
        if (userInput[i] != originalPassword[i]) {
            isMatch = false;
            break;
        }
        i++;
    }

    if (isMatch) {
        cout << "Access granted!" << endl;
    } else {
        cout << "Access denied. Wrong password." << endl;
    }

    return 0;
}US
