/*
Alexander Urwand
Nov 19, 2025
lab 17, 2D Array
*/

#include <iostream>
using namespace std;
#include "lab17_function_urwand.cpp"


int main() {
    cout<<"\n----- Example 1: Array Decleration -----"<<endl;
    array_dec();
    
    cout<<"\n----- Example 2: Print each value in a 2D array -----"<<endl;
    const int NUMCOLS = 5;

    int ar[3][NUMCOLS] = {
        {5,10},
        {-2,-9},
        {6}
    };
   

    print2d(ar, 3);

     cout<<"\n----- Example 3: Populate an array with numbers-----"<<endl;
     // declare a 2D array
     int arr_num[2][3];

     //call the function
     populate_array(arr_num, 2, 3);
     print_array(arr_num,2,3);

    cout<<"\n----- Example 4: Sum of all numbers in a 2D array-----"<<endl;

    int s = sum_all(arr_num,2,3);
    cout<<"The total sum "<<s<<endl;

    cout<<"\n----- Example 5: odd numbers in 2D array-----"<<endl;
    int c = total_odd(arr_num,2,3);
    cout<<"Total odd numbers = "<<c<<endl;




    return 0;
}