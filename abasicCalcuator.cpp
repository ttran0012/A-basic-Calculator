// A basic Calculator that handles mathematical operations
/*
    calc <num 1> op <num 2>
        returns the operation on the two numbers
 */
#include <iostream>
using namespace std;

int main() {
    // get user to enter in two numbers
    int num1, num2;
    cout << "Enter in First number: " << endl;
    cin >> num1;
    cout << "Enter in Second number: " << endl;
    cin >> num2;

    // get user to choose an operation
    char op;
    cout << "Enter in an operation: ";
    cout << "Options: +, -, *, /" << endl;
    cin >> op;
    // perform the operation on the two numbers
    switch(op) {
        case '+':
            cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
            break;
        case '/': // if divide by 0 then error 
            if (num2 == 0 ) {
                cout << "Error: Cannot divide by 0" << endl;
            } else {
                cout << num1 << "/" << num2 << num1 / num2 << "="<< endl;
            }
            break;
        default:
            cout << "Error: Invalid operation" << endl;
            break;
    }

    return 0;
}