/*
Alexander Urwand
Sept. 15, 2025
Lab 6, Nested Conditional Statement and Switch
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    cout<< "------- Lab 7: Branching Mechanism Using Switch Case Statements -------"<<endl;

    int number1;
    int number2; 
    char operation;

    cout << "Type your first number: "<<endl;
    cin >> number1;
    
    cout << "Type your second number: "<<endl;
    cin >> number2;

    cout << "Choose an operation in which you want to calculate both numbers (+,-,*,/,%,q to quit): "<<endl;
    cin >> operation;

    switch (operation)
    {
        case '+':
        { 
        int added = number1 + number2;
        cout << "The solution to "<<number1 <<" + " << number2 << " = " << added << endl;
        break;
        }

        case '-':
        {
        int subtracted = number1 - number2;
        cout << "The solution to " << number1 << " - " << number2 << " = " << subtracted << endl;
        break;
        }

        case '*': 
        { 
        int multiplied = number1 * number2;
        cout << "The solution to " << number1 << " * " << number2 << " = " << multiplied << endl;
        break;
        }

        case '/':
        { 
        int  divided = number1 / number2;
        if (number2 == 0) {
            cout << "The solution is undefined" << endl;
        }
        else if (number2 != 0) {
            cout << "The solution to " << number1 << " / " << number2 << " = " << divided << endl;
        break;
        }
    }

        case '%':
        { 
        float remainder = number1 % number2;
        if (number2 == 0){
            cout << "This is undefined." << endl;
        }
        else if (number2 != 0){
            cout << "The remainder of " << number1 <<"divided by " << number2 << " = " << remainder << endl;
        break;
        }
    }

        case 'q': case 'Q':
        { 
            cout << "The program has ended" << endl;
        break;
        }

        default:
            cout << "ERROR. Your selection could not be read. " << endl;


    return 0;
        }
}