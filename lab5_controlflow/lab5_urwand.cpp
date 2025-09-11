/*
Alexander Urwand
lab 5, control flow
Sept. 10, 2025
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout<<"\n ------- Example 1: Bool Variable ------"<<endl;
    // This example will check if the number is positive.

    // Step 1) declare a variable n but dont give it a variable, collect it from the user
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    //Step 2) check if the number is positive

    bool checkpositive = n >= 0;

    // Step 3) print the results

    cout << "Is "<<n<<" positive? "<<checkpositive<<endl;


    cout<<"\n ------- Example 2: If Statement ------"<<endl;

    // Change the checking_code to 999 if a number is positive

    int checking_code = 111;

    if(n>=0){
        checking_code = 999;
    }
    cout<<"checking code = "<<checking_code<<endl;

    cout<<"\n ------- Example 3: If Else Statement ------"<<endl;

    // Check if a number is odd or even 

    if(n % 2 == 0) {
        cout<<n<<" is EVEN"<<endl;
    }
    else{
        cout<<n<<" is ODD"<<endl;
    }
    // Don't need curly brace if you only have 1 line, only need with multiple lines
    // Good to keep anyway in case you want to add more to it later

    cout<<"\n ------- Example 4: If-Else Statement ------"<<endl;
    // absolute value

    if (n >= 0) {
        cout << n << " is positive"<<endl;
    }
    else{
        cout<<n<<" is negative"<<endl;
        n*=-1;
        cout<<"The absolute value is: "<<n<<endl;
    }

    cout<<"\n ------- Example 5: Multiway Statement ------"<<endl;

    // select the color according to a wavelength

    int wavelength = 0;
    string emitted_color = "";
    cout<<"Enter a wavelength: ";
    cin>>wavelength;
   
    // multiway conditional statement

    if(0 <= wavelength && wavelength <= 379) {
        emitted_color = "ultraviolet";
    }

    else if (380<=wavelength && wavelength <=520) {
        emitted_color = "blue";
    }
    else if( 521<=wavelength && wavelength <=590) 
    emitted_color = "green";
    else if (591<=wavelength && wavelength<=740)
    emitted_color = "infrared";

    else
    emitted_color = "unable to read";

    // print results

    cout<<"The emitted color of wavelength "<<wavelength<< " is "<<emitted_color<<endl;

    cout<<"\n ------- EXERCISE ------"<<endl;

    // declare variables
    
    string gpa = "";
    float final_exam = 0;
    float labs = 0;
    float homework = 0;
    float grade = 0;

    // collect the values for final_exam, labs, and homework

    cout<<"What is the final exam value? "<<endl;
    cin>>final_exam;

    cout<<"What is the value of labs? "<<endl;
    cin>>labs;

    cout<<"What is the value of the homework? ";
    cin>>homework;



    // calculate the grades = final_exam *0.5 + labs*0.3 + homework *0.2

    grade = final_exam *0.5 + labs *0.3 + homework *0.2

    // multiway conditional statement

    if (0>=grade && grade<= 59){
        final_grade = "F";
    }
    else if (69<= grade <= 60) {
        final_grade = "D";
    }

    // print result


    return 0;
}