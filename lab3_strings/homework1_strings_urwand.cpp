/*
Homework 1: String, String Methods, and Numerical Variables
Alexander Urwand
*/

#include <iostream>
#include <string>

using namespace std;

int main () { 

    cout << "------- Activity 1 ------- "<<endl;

    // Below I declare my variables and put string as empty, allowing for input

    string first_variable = "Welcome to ";
    string second_variable = "New York City, ";
    string name = ""; 

    // Under, I type a prompt to type their name and the input is stored as the name variable
    
    cout<< "Please type your name: ";
    cin >> name;

    // Now that the name variable has inputted value, I create a new string variable that concatenates all variables
    
    string message = first_variable + second_variable + name; 

    // I print the concatenated variable to show functionality.

    cout << message  <<endl;

    // Step 5) Find the length of the string and store it as an integer variable
    // I create an integer variable that uses the length method for my message variable, finding the number of characters
    // I print the results to display functionality.
    int string_length = message.length();
    cout << "The strings length: " << string_length << endl;

    // Step 6) use the string method to find the word ma in the string value and store result index as an integer value
    // There is no word "ma" in the4 string variable so this step is not possible.
    int index_word = message.find("ma");
    cout<< "Index: " << index_word <<endl; 

  //string replaced_word = message.replace(-1, "ma", "%---%");
    cout << "New message: " << replaced_word << endl;

    cout << "------------------------------ RESULT ACTIVITY 1 ----------------------------" << endl;

 
    cout << "concatenated message: " << message << endl;

    cout << "Message length: " << string_length << endl;

    cout << "Index of character 'ma': " << index_word << endl;

    cout << "Replace 'ma' with %---%: " << replaced_word << endl;


    cout << "-------------- Activity 2 -------------"<< endl;

    const float pi = 3.14159;

    float radius = 0, height = 0;

    cout << "Enter a radius: " << endl;
    cin >> radius;

    cout << "Enter a height: " << endl;
    cin >> height;

    cout << "Is the radius greater than the height? " << (radius > height) << endl;

    bool check_truth = (radius > height) << endl;

    float triple_height = height *= 3;
    float increase_radius = radius += 5;

    cout << "Tripled height: " << triple_height << endl;
    cout << "Increased radius: "  << increase_radius << endl;
   
    cout << "Is the radius not equal to and greater than the height? " << (radius != height) && (radius > height) << endl;
    

    return 0;
}