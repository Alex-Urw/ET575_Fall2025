/*
Alexander Urwand
November 12th, 2025
Lab 14: Introduction to array, pointers, and references
*/

#include <iostream>
using namespace std;

#include "lab14_function_urwand.cpp"

int main(){
    cout<<"\n----- Example 1: pointers -----"<<endl;
    pointer_ref();

    cout<<"\n----- Example 2: -----"<<endl;
    string something = "Hello World!";
    printvalue(something);


    printbyreference(something);

    printaddress(&something);

    printvalue(something);

    printvalue(something);

    cout<<"\n ----- Example 3: Arrays -----" <<endl;
    arrays();

    cout<<"\n----- Example 4: array sizes -----"<<endl;
    sizeofarrays();

    cout<<"\n----- Example 5: loop in an array -----"<<endl;
    looparray();




    return 0;
}


