/*
Alexander Urwand
Aug 27, 2025
Lab 1, iostream
*/
// C++ library
#include <iostream>
using namespace std;

int main() 
{
    cout << "------- Example 1: cout data --------"<<endl;
    cout << "This is a C++ code"<<endl;
    // variables = temporary storage of data
    // declare a variable first
    string username = "peterpan123";
    cout<<"\nWelcome to C++ \t\t"<<username<<endl;
    
    cout << "------- Example 2: cin data ---------"<<endl;
    cout<< "Enter a new username "<<endl;
    cin >> username;
    cout <<"New user is "<<username<<endl;

    cout << "------- Example 3: data type ---------"<<endl;
    //declare variable
    char sym = '%';
    float distance = 5;
    int number = 8.9;

    cout<<"Given symbol = "<<sym<<endl;
    cout<<"Given distance = "<<distance<<endl;
    cout<<"Given number = "<<number<<endl;

    cout << "------- Excercise ---------"<<endl;
    
    // Declare variables
    string country = "country";
    char gender = "gender";
    int zipcode = "zipcode";
    float rate = "rate";
    
    // Collect data
    cout << "Type a country: "<<endl;
    cin >> country;
    cout << "Enter your gender (m for male or f for female): "<<endl;
    cin >> gender;
    cout << "Enter your zipcode: "<<endl;
    cin >> zipcode;
    cout >> "Enter your tax rate: "<<endl;
    cin << rate;


    // Print results
    cout << "Entered country: "<<country<<endl;
    cout << "Entered gender: "<<gender<<endl;
    cout << "Entered zipcode: "<<zipcode<<endl;
    cout << "Entered tax rate: "<<rate<<endl;
    return 0;
}
