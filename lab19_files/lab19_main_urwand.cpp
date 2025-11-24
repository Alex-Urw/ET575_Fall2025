/*
Alexander Urwand
Nov 24, 2025
Lab 19, files and console input
*/
#include <iostream>
#include "lab19_function_urwand.cpp"
using namespace std;

int main(){
    cout<<"\n----- Example 1: Consule Input Failure -----"<<endl;
    checknumber();

    cout<<"\n----- Example 2: Console Input Failure in Loop -----"<<endl;
  
    cout<<"Validated Number = "<<validatenumber()<<endl;
    
    cout<<"\n----- Example 3: Reading a File -----"<<endl;

    readfile();

    cout<<"\n----- Example 4: Writing a File -----"<<endl;

    //call function and pass the file name
    writefile("outputfile.txt");

    cout<<"\n----- Example 5: Append Data into a File -----"<<endl;

    appendfile("samplefile.txt");

    cout<<"\n----- EXERCISE -----"<<endl;
    datafile("data_user.txt");

    appendDataFile("data_user.txt", "This is my appended message");

    readingDataFile();
    return 0;
}
