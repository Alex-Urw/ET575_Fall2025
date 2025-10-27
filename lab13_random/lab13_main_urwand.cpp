/*
Alexander Urwand
October 27, 2025
Lab 13: Random Variables
*/

#include <iostream>
#include "lab13_function_urwand.cpp"
#include<time.h>

using namespace std;

int main(){
    srand(time(0));
    cout<<"\n ----- Example 1: Random Number -----"<<endl;
    int r = random_number();
    cout<<"Random number = "<<r<<endl;

    
    cout<<"\n ----- Example 2: Different Random Number -----"<<endl;
    int diff_random = different_random();
    cout<<"Different Random Number: "<<diff_random<<endl;

    
    cout<<"\n ----- Example 3: Range of Random Numbers -----"<<endl;
    int r_0_9 = random_0_9();
    cout<<"Number between 0 and 9: \t"<<r_0_9<<endl;

    cout<<"\n ----- Example 4: Specific Range of Random Numbers -----"<<endl;
    cout<<"Number between -10 and 5: \t"<<random_neg10_5()<<endl;

    cout<<"\n ----- EXERCISE -----"<<endl;

    int run1 = random_1_6();
    int run2 = random_1_6();

    // call a function to check for snake eyes
    bool result = compare_ones(run1, run2);

    // call function to print result
    printresult(run1, run2,result);


    return 0;
}