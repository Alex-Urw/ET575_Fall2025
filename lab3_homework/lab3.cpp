/*
Alexander Urwand
Sept. 7, 2025
*/

#include <iostream>
using namespace std; 
int main(){

    // Here I assign a the input value and allow user input
    int a;
    cout << "Please enter your first number: "<<endl;
    cin >> a;

    // Below I indicate that if the user types a as 15, the program will prompt to input another number (b)

    if (a == 15) {
        int b;
        cout << "Enter your second number: "<<endl;
        cin >> b;

        // Below are the arithmetic opperations between both a and b.

        cout << "\nArithmetic Operations: \n";
        cout << "a + b = "<< a + b << endl;
        cout << "a - b = "<< a - b << endl;
        cout << "a * b = "<< a * b << endl;
        cout << "a / b = "<< a / b << endl;
        cout << "a % b = "<< a % b << endl;

        a = a + b;
        b = a - b * 2;

        // Below will show the values after the assignment operations are executed.

        cout << "\nAfter Assignment Operations: \n"<<endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;

        // Below I display boolean operations and their truth values.
        // I use bool alpha to display truth values as either true or false.

        cout << "\nBoolean Operations: \n"<<endl;
        cout << boolalpha; 
        cout << "Is a greater than b? " << (a > b) << endl;
        cout << "Is a equal to b? " << (a == b) << endl;
        cout << "Is a not equal to b? " << (a != b) << endl;
        cout << "Are both a and b positive? " << (a > 0 && b > 0) << endl;
        cout << "Is either a or b negative? " << (a < 0 || b < 0) << endl;
        cout << "Is a not greater than b? " << !(a > b) << endl;



    } 
    return 0;
}