/*
Alexander Urwand
October 27, 2025
Lab 13: Random Variables
*/

#include <iostream>
#include <cstdlib>
#include <time.h>


using namespace std;

// Function to return a random number
int random_number(){
    return rand();
}

// Example 2: Different Random Number
int different_random(){
    srand(time(0));
    return rand();
}

// Example 3: Range of Random Numbers
// Generate random numbers between 0 and 9

int random_0_9(){
    return rand()%10;
}

// Example 4: Specific Range of Random Numbers
int random_neg10_5(){
    return -10 + rand()%16;
}

// Exercise
// function that generates a random number between 1 and 6

int random_1_6(){
    return 1 + rand() % 6;
}


// Function to compare if two numbers are 1's
bool compare_ones(int r1, int r2){
    if (r1 == 1 && r1 == r2){
        return true;
    }
    else{
        return false;
    }

}

// function to prompt result
void printresult(int r1, int r2, bool result){
        if (result == true)
            cout<<"Congrats! You got snake eyes!"<<endl;
        else{
            cout<<r1<<" "<<r2<<" Better luck next time!"<<endl;
        }

        }
        
