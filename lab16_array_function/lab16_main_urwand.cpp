/*
Alexander Urwand
Lab 16, Array in a Function
Nov 17, 2025
*/

#include <iostream>
#include "lab16_function_urwand.cpp"
using namespace std;

int main(){
    // initialize variables and array
    int arraysize = 3;
    int arrnum[arraysize];

    //calling functions
    fillup(arraysize, arrnum);
    printarray(arraysize, arrnum);

    cout<<"\n-----"<<endl;
    // initialize variables and array
    int arr_pos_numbers[ARRAY_SIZE];
    int listsize = 0;
    int targetnumber = 8;

    //calling functions
    fillarray(arr_pos_numbers, listsize);
    printarray(listsize, arr_pos_numbers);

    cout<<"\n----- Example 3: Search Program -----"<<endl;
    fillarray(arr_pos_numbers, listsize );
    printarray(listsize, arr_pos_numbers); 
    int resultsearch = search(arr_pos_numbers, listsize, targetnumber);

    printresult(resultsearch,targetnumber);

    cout<<"\n ----- EXERCISE -----"<<endl;

    //initialize variables and array
    int arr_number[] = {6, -10, 9, 12, -3, -8, 5, 7, 4,0};


    return 0;
}