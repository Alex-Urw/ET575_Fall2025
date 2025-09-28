/* Homework 2: Branching 

Alexander Urwand

*/ 

#include <iostream>
#include <string>
using namespace std;

int main () {
    cout << "------- Program 1: Age Eligibility -------" << endl;
    // Here I will allow for user input to print their age and determine eligibility on various activities.
    // Below I declare a variable age as an integer. 
    // I print the prompt to enter the age and below I store the inputted value as the age variable.

    int age;
    cout << "Enter your age: " << endl;
    cin >> age;

    // Below I use if, else if, and else statements along with inequality signs to determine which age inputted is eligible for which activity.
    // The last else if statement makes the cutoff age 119, indicating anything greater is unreasonable and invalid.
    // My else statement prompts an invalid message, meaning if anything other than the accepted integers are input, it will be invalid.

    if (age > 0 && age < 13) {
        cout << "Not eligable for any activities." << endl;
    }
    else if (age >= 13 && age <= 17) {
        cout << "Eligible for youth activities." << endl;
    }
    else if (age >= 18 && age <= 64) {
        cout << "Eligible for adult activities." << endl;
    }
    else if (age >= 65 && age < 120) {
        cout << "Eligible for senior activities." << endl;
    }
    else 
    cout << "Invalid age. Please enter a valid age. " << endl;

    // Program 1 is complete.

    cout << "------- Program 2: Nested Conditional Statements -------" << endl;
    // Using nested conditional statement, my program will add two numbers and display a message according to the table provided.
    // Below I give the integer variables for num1 and num2 an empty value.

    int num1;
    int num2;

    // Here I prompt for the first and second number to be input.
    // The first number is stored as num1 and the second as num2.

    cout << "Enter the first number: " << endl;
    cin >> num1;

    cout << "Enter the second number: " << endl;
    cin >> num2;

    // I create the variable for the num between num1 and num2 to add them and use in assessing which prompt is appropriate moving forward.

    int numsum = num1 + num2;

    // I suse an if statement here for the first prompt and condition.

    if (numsum < 0) {
        cout << "False alarm! The sum is " << numsum << endl;
    }

    // Here I use an else if statement where within it I nest other conditional statements.
    else if (numsum >= 1 && numsum <= 100) {
        // This first nested statement declares that if the numsum divisible by 5 has a remainder of 0 (it's a multiple of 5) then it prompts the message.
        if (numsum % 5 == 0) {
            cout << numsum << " Is a pentagon." << endl;
        }
        // Here it states if the numsum divisible by 2 does not have a remainder of 0 (is odd) then it places a different prompt.
        else if (numsum % 2 != 0)
            cout << numsum << " is an odd guess." << endl;
        }
    // I include the next else statement, no nesting needed.
    else if (numsum >= 101 && numsum <= 200) {
        cout << "The new lucky number is " << numsum << endl;
    }
    // This else if statement also doesn't require nesting.
    else if (numsum >= 201 && numsum <= 999) {
        cout << numsum << " is a dreaming number." << endl;
    }
    // For this else if statement, I nest an if statement printing a response if numsum is divisible by 2 (it is even).
    else if (numsum >= 1000) {
        if (numsum % 2 == 0) {
            cout << numsum << " approaches to the infinite evenly!" << endl;
        }
        // Here I put an else if statement if the numsum variable is greater or equal to 2000.
        else if (numsum >= 2000) {
            cout << numsum << " approaches to the infiite and beyond!" << endl;
        }
    }
    // Program 2 is complete.

    cout << "------- Program 3: Temperature Converter -------" << endl;

    // Below I declare an integer variable for the input to select the proper switch statement.
    //I type the prompts and allow the input to be saved as the variable.

    int conversion;
    cout << "Select a temperature conversion: " << endl;
    cout << "1 for Celsius to Fahrenheit" << endl;
    cout << "2 for Fahrenheit to Celsius" << endl;
    cout << "3 for Kelvin to Celsius" << endl;
    cout << "4 for Kelvin to Fahrenheit" << endl;
    cout << "5 for Exit" << endl;
    cin >> conversion;

    // Below I prompt for temperature to be inputed and store the value into the float variable (float to account for decimal input).

    float temp;
    cout << "Now type a temperature that you wish to convert: " << endl;
    cin >> temp;

   // Here I begin my switch statements according to the conversion variable response.
    switch (conversion) {

        // In the first case, I declare a float variable and put the value as the conversion formula.
        // It will take the input and plug it into the formula to get the conversion temperature
        // I print out the response in a sentence.
        case 1:
            float formula1;
            formula1 = temp * (9/5) + 32;
            cout << temp << " Celsius is equal to " << formula1 << " Fahrenheit." << endl;
            break;

        // In the second case, I declare another float variable and put the value as the new conversion formula.
        // I repeat this process for each of the following conversions.

        case 2: 
            float formula2;
            formula2 = (temp - 32) *(5/9);
            cout << temp << " Fahrenheit is equal to " << formula2 << " Celsius." << endl;
            break;

        case 3:
            float formula3;
            formula3 = temp - 273.15;
            cout << temp << " Kelvin is equal to " << formula3 << " Celsius." << endl;
            break;

        case 4:
            float formula4;
            formula4 = (temp - 273.15)* (9/5) + 32;
            cout << temp << " Kelvin is equal to " << formula4 << " Fahrenheit." << endl;
            break;
            
        // In this last case statement, I print a message affirming the request to exit.
        case 5: 
            cout << "You have exited. Goodbye!" << endl;
            break;

        // Any other input response except for 1-5 will show an invalid message as printed below.
        default:
            cout << "Sorry, Your entry is invalid. Please try again!" << endl;
            break;

        // Program 3 is complete.

    }

    return 0;
    }